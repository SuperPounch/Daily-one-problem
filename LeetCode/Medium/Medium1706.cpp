//
// Created by 李啸 on 2022/2/24.
//题目名：球会落在何处
/* 题目大意
用一个大小为 m x n 的二维网格 grid 表示一个箱子。你有 n 颗球。箱子的顶部和底部都是开着的。
箱子中的每个单元格都有一个对角线挡板，跨过单元格的两个角，可以将球导向左侧或者右侧。
>>>将球导向右侧的挡板跨过左上角和右下角，在网格中用 1 表示。
>>>将球导向左侧的挡板跨过右上角和左下角，在网格中用 -1 表示。
在箱子每一列的顶端各放一颗球。每颗球都可能卡在箱子里或从底部掉出来。
 如果球恰好卡在两块挡板之间的 "V" 形图案，或者被一块挡导向到箱子的任意一侧边上，就会卡住。
返回一个大小为 n 的数组 answer ，其中 answer[i] 是球放在顶部的第 i 列后从底部掉出来的那一列对应的下标，如果球卡在盒子里，则返回 -1 。
*/
/*
官解思路： 模 拟 法 ？ 类似动态规划吗？
我们依次判断每个球的最终位置。
对于每个球，从上至下判断球位置的移动方向。
在对应的位置，如果挡板向右偏，则球会往右移动；
如果挡板往左偏，则球会往左移动。若移动过程中碰到侧边或者V 型，则球会停止移动，卡在箱子里。
如果可以完成本层的移动，则继续判断下一层的移动方向，直到落出箱子或者卡住
*/

#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
    vector<int> findBall(vector<vector<int>> &grid) {
        int n = grid[0].size();
        vector<int> ans(n);
        for (int j = 0; j < n; ++j) {
            int col = j; // 球的初始列
            for (auto &row : grid) {
                int dir = row[col];
                col += dir; // 移动球
                if (col < 0 || col == n || row[col] != dir) { // 到达侧边或 V 形
                    col = -1;
                    break;
                }
            }
            ans[j] = col; // col >= 0 为成功到达底部
        }
        return ans;
    }//作者：LeetCode-Solution;;来源：力扣（LeetCode);著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
};

//JAVA版，宫水三叶，很好理解。
/*class Solution {
    int m, n;
    int[][] g;//用二维数组g来记录每组的动态状态
    public int[] findBall(int[][] grid) {
        g = grid;
        m = g.length; n = g[0].length;// m 行 n 列
        int[] ans = new int[n];//ans记录结果。
        for (int i = 0; i < n; i++) ans[i] = getVal(i);
        return ans;
    }
    int getVal(int x) {
        int r = 0, c = x;// r=row行 c=column列
        while (r < m) {  // r每次运动必定增加，除非卡住，直到 r = m - 1
            int ne = c + g[r][c];  // 每次列变化和当前g[r][c]关联
            if (ne < 0 || ne >= n) return -1;  // 球到达边界
            if (g[r][c] != g[r][ne]) return -1;// 球卡在V型口
            r++;
            c = ne;//ne就是下一次运动的列
        }
        return c;
    }
}

//作者：AC_OIer
//加注释
*/
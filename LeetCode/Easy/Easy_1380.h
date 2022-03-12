//
// Created by 李啸 on 2022/2/15.
//

#ifndef DAILY_ONE_PROBLEM_EASY_1380_H
#define DAILY_ONE_PROBLEM_EASY_1380_H

#include "vector"

using namespace std;

class Easy_1380 {
public:
//力扣的官方解答，方法二：预处理每行的最小值，每列的最大值
vector<int> luckyNumbers(vector<vector<int>> &matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> minRow(m, INT_MAX), maxCol(n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                minRow[i] = min(minRow[i], matrix[i][j]);
                maxCol[j] = max(maxCol[j], matrix[i][j]);
            }
        }
        vector<int> ret;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == minRow[i] && matrix[i][j] == maxCol[j]) {
                    ret.push_back(matrix[i][j]);
                }
            }
        }
        return ret;
    }
};
#endif //DAILY_ONE_PROBLEM_EASY_1380_H

/*
创建两个数组 row 和 col 用于进行预处理，row[x]row[x] 含义为第 xx 行的最小值，col[y]col[y] 为第 yy 列的最大值。
然后扫描棋盘取得符合条件的幸运值即可。

作者：AC_OIer
链接：https://leetcode-cn.com/problems/lucky-numbers-in-a-matrix/solution/gong-shui-san-xie-jian-dan-mo-ni-ti-by-a-9xwg/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。*/
//Java代码如下
/*
 * class Solution {
    int N = 55;
    int[] row = new int[N], col = new int[N];
    public List<Integer> luckyNumbers (int[][] mat) {
        int n = mat.length, m = mat[0].length;
        for (int i = 0; i < n; i++) {
            row[i] = 100001;
            for (int j = 0; j < m; j++) {
                row[i] = Math.min(row[i], mat[i][j]);
                col[j] = Math.max(col[j], mat[i][j]);
            }
        }
        List<Integer> ans = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int t = mat[i][j];
                if (t == row[i] && t == col[j]) ans.add(t);
            }
        }
        return ans;
    }
}*/

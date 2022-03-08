//
// Created by 李啸 on 2022/3/7.
//适合打劫银行的日子
//题目的意思就是找一个time+1+time的U型函数的极小值
//确保前后time天
#include "iostream"
using namespace std;
#include "vector"

//动态规划：非递增-》非递减，用left和right来记录i左边连续非递增的天数和i右边连续非递减的天数
class Solution  {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int n = security.size();//record security.size
        vector<int> left(n);
        vector<int>right(n);
        //left[0]=0;
        for (int i = 1; i < n; ++i) {
            if(security[i]<=security[i-1])//从左向右看
            left[i]=left[i-1]+1;
            if (security[n-i-1]<=security[n-i])//从右向左看
                right[n-i-1]=right[n-i]+1;
        }
        vector<int>ans;
        for (int i = time; i < n-time; ++i) {
            if (left[i]>=time&&right[i]>=time)
                ans.emplace_back(i);
        }
        return ans;
    }
};
//时间复杂度：O(n)O(n)，其中 nn 为数组 \textit{security}security 的长度。需要遍历数组求出第 ii 天前连续非递增的天数与第 ii 天后连续非递减的天数，然后再遍历数组检测第 ii 天是否适合打劫。
//
//空间复杂度：O(n)O(n)，其中 nn 为数组 \textit{security}security 的长度。需要 O(n)O(n) 的空间来存储第 ii 天前连续非递增的天数与第 ii 天后连续非递减的天数。

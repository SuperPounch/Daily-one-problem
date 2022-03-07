//
// Created by 李啸 on 2022/3/7.
//适合打劫银行的日子
//动态规划：非递增-》非递减，用left和right来记录i左边连续非递增的天数和i右边连续非递减的天数
#include "iostream"
using namespace std;
#include "vector"
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
            if (security[n-i]>=security[i+1])//从右向左看
                right[i]=right[i+1]+1;
        }
    }
};

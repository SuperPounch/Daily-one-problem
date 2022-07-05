// 旋转函数
// Created by 李啸 on 2022/4/22.
//
#include <numeric>
#include "iostream"
#include "vector"

using namespace std;

class Solution {
public:
    //查看相邻的两个函数，发现规律
    //当 1≤k<n 时，F(k)=F(k−1)+numSum−n×nums[n−k]

    int maxRotateFunction(vector<int> &nums) {
        int f = 0, n = nums.size();
        // accumulate() 用法
        int numSum = accumulate(nums.begin(), nums.end(), 0);
        //一次循环，求出F(0)
        for (int i = 0; i < n; ++i) {
            f += i * nums[i];
        }
        //运用规律
        int ans = f;
        for (int i = n - 1; i > 0; i--) {//为什么从n-1，因为规律里是n-k，所以F(1)就是n-1
            f += numSum - n * nums[i];
            ans = max(ans, f);
        }
        return ans;
    }
};


/* 暴力，所以超出时间
    int maxRotateFunction(vector<int> &nums) {
        int n = nums.size();
        int max = 0;
        for (int i = 0; i < n; ++i) {
            int x =function(nums,i);
            if (x>max) max=x;
        }
        return max;
    }

    int function(vector<int> &nums, int n) {//旋转因子n
        int length = nums.size();
        int ans = 0;
        for (int i = 0; i < length; ++i) {
            ans += ((i + n) % length) * nums[i];
        }
        return ans;
    }
 */
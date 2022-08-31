//
// Created by 李啸 on 2022/8/29.
//
#include "vector"
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(2*n);
        for (int i = 0; i < n; ++i) {
            res[2*i] = nums[i];
            res[2*i+1] = nums[i+n];
        }
        return res;
    }
};
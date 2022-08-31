//
// Created by 李啸 on 2022/8/9.
//力扣打卡
#include <numeric>
#include "iostream"
#include "vector"

using namespace std;
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minaccnums=0;
        int acc =0;
        for(int num : nums){
            acc +=num;
            if(acc<minaccnums)
                minaccnums = acc;
        }
        return -minaccnums+1;
    }
};
//
// Created by 李啸 on 2022/9/6.
//
#include "vector"
#include "algorithm"
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
    }
    bool contains(vector<int>& nums){
        unordered_set<int>
    }
};

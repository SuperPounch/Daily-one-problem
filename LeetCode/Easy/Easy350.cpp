//
// Created by 李啸 on 2022/10/2.
//
#include "vector"
#include "unordered_map"
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;//result
        unordered_map<int,int> map;//record num--count
        if(nums1.size()>nums2.size())return intersect(nums2,nums1);//遍历小数组，减少遍历内存
        //遍历
        for(int num:nums1){
            map[num]++;
        }
        for(int num:nums2){
            if(map[num]>0){res.push_back(num);}
            map[num]--;
        }
        return res;
    }
};

//
// Created by 李啸 on 2022/2/19.
//

#include "iostream"
#include "vector"

using namespace std;
//煎饼排序
//类选择排序--找到每次排序的最大数字，通过两次操作将他放到操作组的队尾
//第一次将最大数(下标index）翻转到队首，再次翻转到队尾
//第一步选择 k = index + 1，然后反转子数组 arr[0 ... k - 1]，此时该元素已经被放到首部。
//第二步选择 k = n，其中 n 是数组arr 的长度，然后反转整个数组，此时该元素已经被放到尾部。
class Solution {
public:
    vector<int>pancakeSort (vector<int>& arr){
        vector<int> ret;
        for (int n = arr.size(); n >1; n--) {
            int index = max_element(arr.begin(),arr.begin()+n)-arr.begin();
            if (index==n-1){
                continue;
            }
            reverse(arr.begin(),arr.begin()+index+1);
            reverse(arr.begin(),arr.begin()+n);
            ret.push_back(index+1);
            ret.push_back(n);
        }
        return ret;
    }
};

int main(){
    vector<int> arr (4);
    arr={3,2,4,1};
    Solution solution;vector<int>ret=solution.pancakeSort(arr);
    for (int i = 0; i < 4; ++i) {
        cout<<ret[i];
    }
}
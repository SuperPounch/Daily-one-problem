#include <cstdint>

//位1 的个数
// Created by 李啸 on 2022/4/8.
//

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n){
            n&=(n-1);
            ans++;
        }
        return ans;
    }
};

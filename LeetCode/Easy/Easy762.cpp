//二进制表示中质数个计算置位
// Created by 李啸 on 2022/4/8.
//计算置位就是二进制表示里1的个数
#include "iostream"
#include "vector"

using namespace std;

class Solution {
public:
    bool isPrime(int x) {//not include 0/1
        if (x < 2)return false;
        for (int i = 2; i * i <= x; ++i) {
            if (x % i == 0)
                return false;
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
    int ans=0;
        for (int i = left; i <= right ; ++i) {
            if(isPrime(__builtin_popcount(i)))
                ans++;
        }
        return ans;
    }
};
//为什么__builtin_popcount()这个函数找不到声明，却能用？

int main(){
    Solution solution;
    int x=solution.countPrimeSetBits(10,15);
    cout<<x;
    return 0;
}
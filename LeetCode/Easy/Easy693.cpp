//交替位二进制
// Created by 李啸 on 2022/3/29.
//题意，给定正整数转换成二进制后，相邻位的数字永不相同。

#include "iostream"

using namespace std;

//方法：模拟
/*class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev=2;
        while(n!=0){
            int cur=n%2;
            if(cur==prev)
                return false;
            prev=cur;
            n/=2;
        }
        return true;
    }
};*/
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int cur = -1;
        while (n != 0) {
            int u = n & 1;//将n转换成二进制形式
            if ((cur ^ u) == 0)return false;//出现错误了，false
            cur = u;
            n >>= 1;
        }
        return true;//否则,true
    }
};

int main() {
    Solution solution;
    solution.hasAlternatingBits(5);
}
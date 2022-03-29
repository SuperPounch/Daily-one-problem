//交替位二进制
// Created by 李啸 on 2022/3/29.
//题意，给定正整数转换成二进制后，相邻位的数字永不相同。

#include "iostream"

using namespace std;

//Method1：模拟
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

// Method2：位运算
/*
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
*/

/*Method：更简单的位运算，利用交替位二进制数的性质
性质：当给定值 nn 为交替位二进制数时，将 nn 右移一位得到的值 mm 仍为交替位二进制数，且与原数 nn 错开一位，两者异或能够得到形如 0000...11110000...1111 的结果 xx，此时对 xx 执行加法（进位操作）能够得到形如 0000...100000000...10000 的结果，将该结果与 xx 执行按位与后能够得到全 00 结果。*/
class Solution {
public:
     bool hasAlternatingBits(int n) {
         long long int x = n ^ (n >> 1);//int 通过不了
        return (x & (x + 1)) == 0;
    }
};
//时间和空间复杂度均O(1)
/*作者：AC_OIer
链接：https://leetcode-cn.com/problems/binary-number-with-alternating-bits/solution/gong-si-shui-by-ac_oier-zuw7/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。*/

int main() {
    Solution solution;
    solution.hasAlternatingBits(5);
}
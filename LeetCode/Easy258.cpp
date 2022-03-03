//
// Created by 李啸 on 2022/3/3.
//各位相加

#include "iostream"
using namespace std;
//way 1: 模拟
class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};
//O（log（num））
//作者：LeetCode-Solution
//Way 2 ： math
class Solution {
public:
    int addDigits(int num) {
        return (num - 1) % 9 + 1;
    }
};
//O（1）
//作者：LeetCode-Solution
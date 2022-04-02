//自除数
// Created by 李啸 on 2022/3/31.
//给定范围，输出所有的自除数
#include "iostream"
#include "vector"
//#include "math.h"

using namespace std;

class Solution {
public:
    bool isSelfDividingNumber(int number) {
        int temp = number;
        while (temp > 0) {
            int divid = temp % 10;
            if (number % divid != 0 || divid == 0)//为什么两个判断条件的前后顺序会导致代码输出结果不一样》？
                return false;
            temp /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i < right; ++i) {
            if (isSelfDividingNumber(i))
                ans.emplace_back(i);
        }
        return ans;
    }
};


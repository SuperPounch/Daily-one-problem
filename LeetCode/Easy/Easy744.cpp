//寻找比目标字母大的最小字母
// Created by 李啸 on 2022/4/3.
//一个排序后的字符列表 letters ，只包含小写字母
//目标字母target，找出有序列表里比目标字母大的最小字母
#include <algorithm>
#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    //Method_1:线性查找--时间复杂度O(n)
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(char letter:letters)
            if (letter>target)
                return letter;
        return letters[0];
    }
    //Method_2:二分查找
        char nextGreatestLetter2(vector<char> &letters, char target) {
            return target < letters.back() ? *upper_bound(letters.begin(), letters.end() - 1, target) : letters[0];
        }
        //upper_bound 函数
    };
};


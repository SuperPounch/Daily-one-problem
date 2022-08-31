//力扣打卡
// Created by 李啸 on 2022/8/11.
//重新格式化字符串
#include <numeric>
#include "iostream"
#include "vector"

using namespace std;
class Solution {
public:
    string reformat(string s) {
        int sum_digit = 0;//number counting
        for (auto& c : s) {
            if (isdigit(c)) {
                sum_digit++;
            }
        }
        int sum_alpha = s.size() - sum_digit;
        if (abs(sum_digit - sum_alpha) > 1) {
            return "";
        }//not eligible
        bool flag = sum_digit > sum_alpha;
        for (int i = 0, j = 1; i < s.size(); i += 2) {
            if (isdigit(s[i]) != flag) {
                while (isdigit(s[j]) != flag) {
                    j += 2;
                }
                swap(s[i], s[j]);
            }
        }
        return s;
    }
};

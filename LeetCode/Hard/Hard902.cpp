// Created by 李啸 on 2022/10/18.
#include "iostream"
#include "vector"
#include "math.h"

using namespace std;

class Solution {
public:
    int atMostNGivenDigitSet(vector<string> &digits, int n) {
        //首先判断n有多少位
        string s = to_string(n);
        int s_len = s.size();
        int d_len = digits.size();
        vector<int> c;
        //找出<=n的最大匹配数，然后映射digits
        for (int i = 0; i < s_len; i++) {
            for(int j =0;j< d_len;j++){
                if(digits[j][0]<=s[i])
                    c.push_back(digits[j][0]-'0');
            }
        }
    }
};

int main() {
    int n1 = 10000;
    int n2 = 100;
    vector<string> digits2 = {"1", "3", "5", "7"};
    vector<string> digits1 = {"1", "4", "9"};
    Solution solution;
    solution.atMostNGivenDigitSet(digits1, n1);
    solution.atMostNGivenDigitSet(digits2, n2);
    return 0;
}
//字符的最短距离
// Created by 李啸 on 2022/4/19.
//
#include "iostream"
#include "vector"
#include "string"

using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int length = s.length();
        vector<int> answer(length);

        for (int i = 0, idx = -length; i < length; ++i) {
            if (s[i] == c)idx = i;
            answer[i] = i - idx;
        }
        for (int i = length - 1, idx = 2*length; i >= 0; --i) {
            if (s[i] == c)idx = i;
            answer[i] = min(answer[i], idx - i);
        }
        return answer;
    }
};

int main() {
    string string1 = "loveleetcode";
    char ch = 'e';
    Solution s;
    for (auto dis: s.shortestToChar(string1, ch))
        cout << dis;
    return 0;
}

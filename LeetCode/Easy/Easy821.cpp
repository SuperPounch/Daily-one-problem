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
        for (int i = length - 1, idx = 2 * length; i >= 0; --i) {
            if (s[i] == c)idx = i;
            answer[i] = min(answer[i], idx - i);
        }
        return answer;
    }

    vector<int> shortestToChar_Method2_twoPointer(string s, char c) {
        int n = s.length();
        vector<int> ans(n);
        std::fill(ans.begin(), ans.end(), n);
        //问题出在fill()时，应该先给大的值。
        int idx = -n;
        for (int i = 0; i < n; i++) {
            //从左向右找c
            if (s[i] == c) {
                //找到c的位置，下标i，往回更新ans数组，从0～i。
                for (int j = i; j >= max(0, (i + idx - 1) / 2); j--) {
                    ans[j] = min(ans[j], i - j);
                }
                idx = i;
            } else
                ans[i] = min(ans[i], i - idx);
        }
        return ans;
    }
};

int main() {
    string string1 = "loveleetcode";
    char ch = 'e';
    Solution s;
    cout << "双指针";
    for (auto dis: s.shortestToChar_Method2_twoPointer(string1, ch))
        cout << dis;
    cout<<endl<<"两次遍历";
    for (auto dis: s.shortestToChar(string1, ch))
        cout << dis;
    return 0;
}

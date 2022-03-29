//考试的最大困扰度
// Created by 李啸 on 2022/3/29.
//题意：给定K，在修改至多K次操作后，得到最大连续相同字符串
//方法：滑动窗口
#include "iostream"
#include "string"

using namespace std;

class solution {
public:
    int maxConsecutiveChar(string &answerKey, int k, char ch) {
        int length = answerKey.size();
        int ans = 0;
        for (int sum = 0, left = 0, right = 0; right < length; right++) {
            sum += answerKey[right] != ch;
            while (sum > k) {
                sum -= answerKey[left++] != ch;
            }
            ans = max(right - left + 1, ans);
        }
        return ans;
    }

    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(maxConsecutiveChar(answerKey, k, 'T'), maxConsecutiveChar(answerKey,k,'F'));
    }
};


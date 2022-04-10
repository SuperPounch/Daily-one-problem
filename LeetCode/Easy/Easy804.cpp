//  唯一摩尔斯密码词
// Created by 李啸 on 2022/4/10.
//Method:Hash table
#include <iostream>
#include "vector"
#include "unordered_set"
using namespace std;

const static string MORSE[] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
        "....", "..", ".---", "-.-", ".-..", "--", "-.",
        "---", ".--.", "--.-", ".-.", "...", "-", "..-",
        "...-", ".--", "-..-", "-.--", "--.."
};

class Solution {
public:
    int uniqueMorseRepresentations(vector<string> &words) {
        unordered_set<string> seen;
        for (auto &word: words) {
            string code;//获得转换后的摩斯密码
            for (auto &c: word) {
                code.append(MORSE[c - 'a']);
            }
            cout<<code<<endl;
            seen.emplace(code);//摩丝密码加入哈希表
        }
        return seen.size();
        //哈希表的size记录了不一样的个数，因为一样的就会放在一个链表下
    }
};
//string::append()-->后附字符到结尾
int main(){
    vector<string> words = {"gin", "zen", "gig", "msg"};
    Solution solution;solution.uniqueMorseRepresentations(words);
}
//
// Created by 李啸 on 2022/9/7.
//
#include "string_view"
#include "vector"
#include "iostream"
#include "algorithm"
#include "assert.h"

using namespace std;

class Solution {
public:
    //c++ don't have split(),so write one
    //don't know what is string_view
    vector <string_view> split(const string_view &str, char trim) {
        int n = str.size();
        vector <string_view> res;
        int pos = 0;
        while (pos < n) {
            while (pos < n && str[pos] == trim) {
                pos++;
            }
            //now, pos == last blank between words
            //so find next word's final pos
            if (pos < n) {
                int cur = pos;
                while (pos < n && str[pos] != trim) {
                    pos++;
                }
                res.emplace_back(str.substr(cur, pos - cur));
            }
        }
        return res;
    }

    string reorderSpaces(string text) {
        int length = text.size();
        vector <string_view> words = split(text, ' ');
        int cntspace = length;//统计空格的个数，通过减去每个单词的长度
        int wordcount = 0;//记录单词的个数
        //维护cntspace,wordcount
        for (auto &word: words) {
            if (word.size() > 0) {
                cntspace -= word.size();
                wordcount++;
            }
        }
        //处理单词=1/>1,两种情况
        string ans;
        //==1
        if (wordcount == 1) {
            ans.append(words[0]);
            for (int i = 0; i < cntspace; i++) {
                ans.push_back(' ');
            }
            return ans;
        }
        //>1
        int perSpace = cntspace / (wordcount - 1);
        int restSpace = cntspace % (wordcount - 1);
        for (int i = 0; i < words.size(); i++) {
            if (words[i].size() == 0)continue;
            if (ans.size() > 0) {
                for (int j = 0; j < perSpace; j++) {
                    ans.push_back(' ');
                }
            }
            ans.append(words[i]);
        }
        for (int i = 0; i < restSpace; i++) {
            ans.push_back(' ');
        }
        return ans;
    }
};

string stringToString(string input) {
    assert(input.length() >= 2);
    string result;
    for (int i = 1; i < input.length() - 1; i++) {
        char currentChar = input[i];
        if (input[i] == '\\') {
            char nextChar = input[i + 1];
            switch (nextChar) {
                case '\"':
                    result.push_back('\"');
                    break;
                case '/' :
                    result.push_back('/');
                    break;
                case '\\':
                    result.push_back('\\');
                    break;
                case 'b' :
                    result.push_back('\b');
                    break;
                case 'f' :
                    result.push_back('\f');
                    break;
                case 'r' :
                    result.push_back('\r');
                    break;
                case 'n' :
                    result.push_back('\n');
                    break;
                case 't' :
                    result.push_back('\t');
                    break;
                default:
                    break;
            }
            i++;
        } else {
            result.push_back(currentChar);
        }
    }
    return result;
}

int main() {
    string line = "   this   is   a sentence";
    while (getline(cin, line)) {
        string text = stringToString(line);

        string ret = Solution().reorderSpaces(text);

        string out = (ret);
        cout << out << endl;
    }
    return 0;
}
//写字符串需要的行数
// Created by 李啸 on 2022/4/12.
#include "iostream"
#include "vector"

using namespace std;
//Method:简单模拟
//s字符串，widths表示26个字母所需要的字符宽度
class Solution {
public:
    vector<int> numberOfLines(vector<int> &widths, string s) {
        int lines = 1;
        int width = 0;
        for(auto  c:s){
            int need_width = widths[c-'a'];
            width+=need_width;
            if(width>100){
                width=need_width;
                lines++;
            }
        }
        return {lines, width};
    }
};


//
// Created by 李啸 on 2022/3/7.
//7进制
//output is string
#include "iostream"
using namespace std;
class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";//
        bool negative =num <0;//判断num的正负，并对其保存
        num= abs(num);//取绝对值对其处理
        string ans;
        while(num>0){
            ans.push_back(num%7+'0');
            num/=7;
        }
        if (negative)ans.push_back('-');
        reverse(ans.begin(),ans.end());
        return ans;
    }


};


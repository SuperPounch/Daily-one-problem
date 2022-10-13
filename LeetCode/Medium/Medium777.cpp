//
// Created by 李啸 on 2022/10/2.
//相对位置，L向左移动，R向右；所以start-L》end——l
#include "string"
using namespace std;
class Solution {
public:
    bool canTransform(string start, string end) {
        int i=0,j=0;
        int n=start.size();
        while(i<n&&j<n){
            //找L、R的位置
            while(i<n&&start[i]=='X')i++;
            while(j<n&&end[j]=='X')j++;
            //相对位置的i、j
            if(i<n&&j<n){
                if(start[i]!=end[j])return false;
                char ch = start[i];
                //判断是否不符合相对位置的要求
                //不符合=false;符合就进入下一个位置
                //正确情况是 L:start>end==i>j; R:i<j;
                if((ch=='L'&&i<j)||(ch=='R'&&i>j))return false;
                //判断不符合的情况，与上述相反
                i++;j++;
            }
        }//while end
        //如果其中一个先遍历完，需要判断另一个是否存在不是X的
        while(i<n){
            if(start[i]!='X')return false;
            i++;
        }
        while(j<n){
            if(end[j]!='X')return false;
            j++;
        }
        return true;
    }
};
//946.验证栈序列
// Created by 李啸 on 2022/8/31.
//简单模拟
#include "stack"
#include "vector"

using namespace std;

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int size = pushed.size();
        stack<int> sta;
        for(int push=0,pop =0; push < size; push++){
            //如果push不加=0，就会出现错误。why？不初始化对话，数字会错？
            sta.emplace(pushed[push]);
            while(!sta.empty() && sta.top() == popped[pop]){
                sta.pop();
                pop++;
            }
        }
        return sta.empty();
    }
};


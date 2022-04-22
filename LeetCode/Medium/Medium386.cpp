//字典序排数
// Created by 李啸 on 2022/4/22.
//给你一个整数 n ，按字典序返回范围 [1, n] 内所有整数。
//你必须设计一个时间复杂度为 O(n) 且使用 O(1) 额外空间的算法。

//Q1：什么是字典序
#include "iostream"
#include "vector"

using namespace std;


class Solution {
public:
    //Method_1 : 迭代+DFS
    vector<int> lexicalOrder(int n) {
        vector<int> ans(n);
        int number = 1;
        for (int i = 0; i < n; ++i) {
            ans[i]=number;
            if(number*10<=n)number*=10;
            else{
                while(number%10==9||number==n)number/=10;//回溯向上，此时number=父节点
                number++;//父节点的兄弟节点，进入下一个路径的DFS
            }
        }
        for(auto i:ans){
            cout<< i<<" ";
        }
        return ans;
    }
};
int main(){
    int n =10000;
    Solution s;
    s.lexicalOrder(n);
}

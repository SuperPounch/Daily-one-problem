//
// Created by 李啸 on 2022/2/21.
//
#include "iostream"

using namespace std;

//一个牌倒倒在另外一个已经倒了的牌上==一个倒了的牌（L、R）只能对"."起作用
//考虑.两侧对LR状态-----》双指针
//来自负雪明烛的解题思路及代码
class Solution {
public:
    string pushDominoes(string dominoes) {
        dominoes = "L" + dominoes + "R";
        int l=0;
        string res="";
        for (int r = 1; r < dominoes.size(); ++r) {
            if (dominoes[r]=='.')continue;
            if (l!=0)res+=dominoes[l];//虚拟的牌不放入结果
            int mid=r-1-l;
            if(dominoes[l]==dominoes[r])res+=string(mid, dominoes[l]);
            else if(dominoes[l]=='L'&& dominoes[r]=='R')
            {
                res += string(mid,'.');
            } else{
                res+=string(mid/2,'R')+(mid%2==1?".":"")+string(mid/2,'L');
            }
            //test
            //cout<<dominoes[l]<<" "<<dominoes[r]<<" "<<res<<endl;
            l=r;
        }
        return res;
    }
};

int main() {
    Solution solution;
    string dominoes;
    dominoes = ".L.R...LR..L..";
    solution.pushDominoes(dominoes);
}


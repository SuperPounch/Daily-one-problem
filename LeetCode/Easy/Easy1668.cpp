//
// Created by 李啸 on 2022/11/3.
//
#include "string"
using namespace std;

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int len_s = sequence.length(),len_w=word.length();
        int j =0;//指针遍历word的位置
        int count = 0,ans =0;//当j遍历完+1
        int last;//用来判断是否连续，是否断过
        for (int i = 0; i<len_s;i++) {
            int x=i;
            while(sequence[x]==word[j]){//find
                j++;x++;
                if(j==len_w){
                    j=0;
                    count++;
                }
            }
            j=0;
            ans = max(ans,count);
            count = 0;
        }
        return ans;
    }
};
int main(){
    return 0;
}
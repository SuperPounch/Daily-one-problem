// Created by 李啸 on 2022/10/1.
#include "iostream"
#include "unordered_map"
#include "vector"
using namespace std;
/*class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int index=-1;
        int minindex ;
        int minlen=INT_MAX;//
        for (auto & it:points){
            index++;
            if(it[0]==x||it[1]==y){
                int len=abs(x-it[0])+ abs(y-it[1]);
                if(len<= minindex){
                    minindex=index;
                    minlen=len;
                }

            }
        return minindex;
        }
};


}*/
class Solution {
public:
    bool equalFrequency(string word) {
        int len = word.size();
        unordered_map<char,int>count;
        int sumch=0;
        //int flag=0;//记录个数=1的字符个数
        for(char ch:word){
            count[ch]++;
        }
        sumch=count.size();
        cout<<"sumch="<<sumch<<",len="<<len<<endl;
        int arv=len/sumch;
        cout<<"平均每个字符应该出现的次数="<<arv<<endl;
        int flag=0;
        for(auto ch:count){
            if(ch.second-arv==1||ch.second-arv==-1){
                flag++;
            }
            cout<<"ch="<<ch.first<<",count="<<ch.second<<endl;
        }
        if(len==sumch)
            return true;
        if(flag==1)
            return true;
/*        //特殊情况，全为1
        if(len==sumch)
            return true;
        if(len%sumch==1){//不删除字符，多出一个，需要-1
            //分情况
            return true;
        }
        //删除一个字符
        if(flag&&(len-1)%(sumch-1)==0)
            return true;*/
        return false;
    }
};

int main(){
    string a="abbcc";
    string b="aazz";
    string c="pzvmfpvsxnkxwwcoabllelzjkczlgmkqdxyvpxlwzmhpkdstvkwlfhqumvxawueqabmqcz";
    Solution solution;
    solution.equalFrequency(a);
    solution.equalFrequency(c);
    return 0;
}
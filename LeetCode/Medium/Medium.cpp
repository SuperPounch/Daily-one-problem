//
// Created by 李啸 on 2022/11/8.
//

#include "iostream"
#include "vector"
#include "string"
#include "algorithm"
#include "math.h"
#include "unordered_set"
#include "unordered_map"

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0)return 0;
        int ans = 0;
        unordered_map<char,int> window;
        int start=0,end=0;
        for(;end<n;end++){
            char c = s[end];
            if(window.count(c)){
                ans = max(ans,end-start);
                start = window[c]+1;
                window[c] = end;
            }else{
                window[c] = end;
            }
        }
        ans = max(ans,end-start);
        return ans;
    }
};
class Solution764 {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        int m = mines.size();//mines[i]=坐标

        //记录mines
        unordered_set<int> mines_index(m);
        for(auto &&vec:mines){
            mines_index.emplace(vec[0]*n+vec[1]);//从0开始数
        }

        //遍历，以ij位置为中心，4个方向上连续的1
        vector<vector<int>> dp(n, vector<int>(n, n));
        int res=0;
        for(int i=0;i<n;i++){//横向遍历每一行
            //left
            int count = 0;
            for(int j=0;j<n;j++){
                if(mines_index.count(i*n+j)==1){//0出现，断点
                    count=0;
                }else{
                    count++;
                }
                dp[i][j] = min(dp[i][j],count);//取四个方向上最小的。
            }
            //right
            count=0;
            for(int j=n-1;j>=0;j--){
                if(mines_index.count(i*n+j)==1){//0出现，断点
                    count=0;
                }else{
                    count++;
                }
                dp[i][j] = min(dp[i][j],count);//取四个方向上最小的。
            }
        }
        for(int j=0;j<n;j++){//纵向遍历每一列
            //up
            int count = 0;
            for(int i=0;i<n;i++){
                if(mines_index.count(i*n+j)==1){//0出现，断点
                    count=0;
                }else{
                    count++;
                }
                dp[i][j] = min(dp[i][j],count);//取四个方向上最小的。
            }
            //down
            count=0;
            for(int i=n-1;i>=0;i--){
                if(mines_index.count(i*n+j)==1){//0出现，断点
                    count=0;
                }else{
                    count++;
                }
                dp[i][j] = min(dp[i][j],count);//取四个方向上最小的。
                res = max(res,dp[i][j]);
            }
        }
        return res;
    }
};
int main(){
    // string s = "abba";
    // Solution solution;
    // cout<<solution.lengthOfLongestSubstring(s);
    //764
    int n = 5;
    vector<vector<int>> mines = {{4, 2}};
    Solution764 solution764;
    solution764.orderOfLargestPlusSign(n, mines);
}
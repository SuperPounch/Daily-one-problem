#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    vector<int> bestCoordinate(vector<vector<int>>& towers, int radius) {
        //暴力搜索信号最大
        //坐标的信号强度要大，同时如果有多个的话，字典序最小的非负坐标：按照x-y的比较顺序，坐标值越小越好
        vector<int> ans(2);
        int maxq = 0;
        int n = towers.size();
        auto func = [&](vector<int>& a, vector<int>& b){
            return static_cast<int>(sqrt(pow(a[0]-b[0],2) + pow(a[1]-b[1],2)));
        };
        for(int x = 0; x<=50;x++ ) {//对每个点
            for(int y=0;y<=50;y++){
                for(auto tower: towers){
                    int tx=tower[0],ty=tower[1],tq=tower[2];
                }
                //维护ans
            }
        }

    }
};
int main(){
    Solution s;  
    vector<vector<int>> towers = {{1,2,5},{2,1,7},{3,1,9}};
    int radius = 2;
    // 替换下方的 xxx 为主函数名， yyy 为测试用例参数开启调试
    s.bestCoordinate(towers,radius);
    return 0;
}
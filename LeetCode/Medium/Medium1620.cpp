#include<iostream>
#include<vector>
#include <algorithm>
#include "math.h"

using namespace std;

class Solution {
public:

    vector<int> bestCoordinate(vector<vector<int>> &towers, int radius) {
        //暴力搜索信号最大
        //坐标的信号强度要大，同时如果有多个的话，字典序最小的非负坐标：按照x-y的比较顺序，坐标值越小越好
        vector<int> ans = {0, 0};
        int max_quality = 0;
        //int n = towers.size();
        auto func = [&](vector<int> &a, vector<int> &b) {
            return (sqrt(pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2)));
        };
        int max_x = 0, max_y = 0;
        for (auto &tower: towers) {
            int tx = tower[0], ty = tower[1];
            max_x = max(tx, max_x);
            max_y = max(ty, max_y);
        }
        for (int x = 0; x <= max_x; ++x) {//对每个点
            for (int y = 0; y <= max_y; ++y) {
                int quality_xy = 0;
                for (auto &tower: towers) {
                    vector<int> temp = {x, y};
                    double dis = func(tower, temp);
                    if (dis <= radius) {
                        cout << "floor=" << floor(tower[2] / (1 + dis)) << ",dis:" << dis<<endl;
                        quality_xy += (tower[2] / (1 + dis));
                    }
                }
                cout << "xy={" << x << "," << y << "}:quality_xy=" << quality_xy << endl;
                //维护ans
                if (quality_xy > max_quality) {
                    max_quality = quality_xy;
                    ans[0] = x, ans[1] = y;
                }
            }
        }
        return ans;
    }
/*    vector<int> bestCoordinate(vector<vector<int>>& towers, int radius) {
        int xMax = INT_MIN, yMax = INT_MIN;
        for (auto &&tower : towers) {
            int x = tower[0], y = tower[1];
            xMax = max(xMax, x);
            yMax = max(yMax, y);
        }
        int cx = 0, cy = 0;
        int maxQuality = 0;
        for (int x = 0; x <= xMax; x++) {
            for (int y = 0; y <= yMax; y++) {
                vector<int> coordinate = {x, y};
                int quality = 0;
                for (auto &&tower : towers) {
                    int squaredDistance = getSquaredDistance(coordinate, tower);
                    //cout<<"squareDistance="<<squaredDistance<<"  ";
                    if (squaredDistance <= radius * radius) {
                        double distance = sqrt((double)squaredDistance);
                        quality += floor((double)tower[2] / (1 + distance));
                        cout<<"distance="<<distance<<"  floor="<<floor((double)tower[2] / (1 + distance))<<"   quality="<<quality<<endl;
                    }
                }
                cout<<"xy"<<x<<" "<<y<<";    quality_xy="<<quality<<endl;
                if (quality > maxQuality) {
                    cx = x;
                    cy = y;
                    maxQuality = quality;
                }
            }
        }
        return {cx, cy};
    }

    int getSquaredDistance(const vector<int> &coordinate, const vector<int> &tower) {
        return (tower[0] - coordinate[0]) * (tower[0] - coordinate[0]) + (tower[1] - coordinate[1]) * (tower[1] - coordinate[1]);
    }*/
};

int main() {
    Solution s;
    vector<vector<int>> towers = {{1, 2, 5},
                                  {2, 1, 7},
                                  {3, 1, 9}};
    vector<vector<int>> towers2 = {{0, 1, 2},
                                   {2, 1, 2},
                                   {1, 0, 2},
                                   {1, 2, 2}};
    int radius = 2;
    // 替换下方的 xxx 为主函数名， yyy 为测试用例参数开启调试
    //s.bestCoordinate(towers, radius);
    s.bestCoordinate(towers2, radius);
    return 0;
}
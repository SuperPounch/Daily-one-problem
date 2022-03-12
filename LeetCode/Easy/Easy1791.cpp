//
// Created by 李啸 on 2022/2/18.
//
#include "iostream"
#include "unordered_map"

using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>> &edges) {
        unordered_map<int, int> degree;
        for (auto &edge: edges) {
            degree[edge[0]]++;
            degree[edge[1]]++;
        }
        int N = degree.size();
        for (auto &v: degree) {
            if (v.second == N - 1) {
                return v.first;
            }
        }
        return -1;
    }
};

//作者：fuxuemingzhu
//图论：节点的度为n-1即为中心点

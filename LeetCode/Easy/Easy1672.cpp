//
// Created by 李啸 on 2022/4/14.
//
#include <climits>
#include <numeric>
#include "vector"

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>> &accounts) {
        int maxWealth = INT_MIN;
        for (auto &account: accounts) {
            maxWealth = max(maxWealth, accumulate(account.begin(), account.end(), 0));
        }
        return maxWealth;
    }
};


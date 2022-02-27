//
// Created by 李啸 on 2022/2/27.
//最优除法
#include "iostream"
#include "vector"
using namespace std;
//法一：动态规划
struct Node {
    double maxVal, minVal;
    string minStr, maxStr;
    Node() {
        this->minVal = 10000.0;
        this->maxVal = 0.0;
    }
};

class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        int n = nums.size();
        vector<vector<Node>> dp(n, vector<Node>(n));

        for (int i = 0; i < n; i++) {
            dp[i][i].minVal = nums[i];
            dp[i][i].maxVal = nums[i];
            dp[i][i].minStr = to_string(nums[i]);
            dp[i][i].maxStr = to_string(nums[i]);
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j + i < n; j++) {
                for (int k = j; k < j + i; k++) {
                    if (dp[j][j + i].maxVal < dp[j][k].maxVal / dp[k + 1][j + i].minVal) {
                        dp[j][j + i].maxVal = dp[j][k].maxVal / dp[k + 1][j + i].minVal;
                        if (k + 1 == j + i) {
                            dp[j][j + i].maxStr = dp[j][k].maxStr + "/" + dp[k + 1][j + i].minStr;
                        } else {
                            dp[j][j + i].maxStr = dp[j][k].maxStr + "/(" + dp[k + 1][j + i].minStr + ")";
                        }
                    }
                    if (dp[j][j + i].minVal > dp[j][k].minVal / dp[k + 1][j + i].maxVal) {
                        dp[j][j + i].minVal = dp[j][k].minVal / dp[k + 1][j + i].maxVal;
                        if (k + 1 == j + i) {
                            dp[j][j + i].minStr = dp[j][k].minStr + "/" + dp[k + 1][j + i].maxStr;
                        } else {
                            dp[j][j + i].minStr = dp[j][k].minStr + "/(" + dp[k + 1][j + i].maxStr + ")";
                        }
                    }
                }
            }
        }
        return dp[0][n - 1].maxStr;
    }
};
//LeetCode官解

//法二
//数学方法观察
/*
 * class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return to_string(nums[0]);
        }
        if (n == 2) {
            return to_string(nums[0]) + "/" + to_string(nums[1]);
        }
        string res = to_string(nums[0]) + "/(" + to_string(nums[1]);
        for (int i = 2; i < n; i++) {
            res.append("/" + to_string(nums[i]));
        }
        res.append(")");
        return res;
    }
};

作者：LeetCode-Solution
链接：https://leetcode-cn.com/problems/optimal-division/solution/zui-you-chu-fa-by-leetcode-solution-lf4c/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */
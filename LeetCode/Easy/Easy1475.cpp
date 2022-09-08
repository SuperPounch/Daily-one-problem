//1475.商品折扣后的最终价格
// Created by 李啸 on 2022/9/1.
//暴力pass，单调栈
#include "vector"
#include "stack"
#include "iostream"

using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int> &prices) {
        int n = prices.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() > prices[i]) {
                printf("pop %d  ", st.top());
                st.pop();
            }
            ans[i] = st.empty() ? prices[i] : prices[i] - st.top();
            printf("ans[%d]=%d  ", i, ans[i]);
            st.emplace(prices[i]);
            printf("st.emplace(%d)\n", prices[i]);
        }
        return ans;
    }
};

int main() {
    int a[5] = {8, 4, 6, 2, 3};
    vector<int> prices(a, a + 5);
    Solution solution;
    for (auto c: solution.finalPrices(prices)) {
        printf("%d", c);
    }
}



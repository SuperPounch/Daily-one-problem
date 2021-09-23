#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        while (n && n % 3 == 0) {
            n = n / 3;
        }
        return n == 1;
    }
};

int main() {
    Solution solution;
    cout << solution.isPowerOfThree(3);
}
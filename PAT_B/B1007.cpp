// Created by 李啸 on 9/28/21.
#include "iostream"
#include "math.h"

using namespace std;

bool issushu(int x) {
    int k, i;
    k = (int) sqrt((double) x);
    for (i = 2; i <= k; ++i) {
        if (x % i == 0)break;
    }
    if (i > k)return true;
    else return false;
};

int main() {
    int n, count=0;
    cin >> n;
    for (int i = 3; i <= n && i + 2 <= n; i += 2) {
        if (issushu(i) && issushu(i + 2)) {
            count++;
        }
    }
    cout << count;
}
//
// Created by 李啸 on 10/19/21.
//

#include <iostream>

using namespace std;

int main() {
    int n, row = 0;
    char c;
    cin >> n >> c;
    for (int i = 0; i < n; ++i) {
        if (2 * i * (i + 2) + 1 > n) {
            row = i - 1;
            break;
        }
    }//找出row，到第几行，从0行=1开始算
    for (int i = row; i >= 1; i--) {
        for (int k = row - i; k >= 1; --k)cout << " ";
        for (int j = 2 * i + 1; j > 0; j--)cout << c;
        cout << endl;
    }
    for (int i = row; i >= 1; i--) cout << " ";
    cout << c << endl;
    for (int i = 1; i <= row; i++) {
        for (int k = row - i; k >= 1; --k)cout << " ";
        for (int j = 2 * i + 1; j > 0; j--)cout << c;
        cout << endl;
    }
    cout << (n - (2 * row * (row + 2) + 1));
    return 0;
}

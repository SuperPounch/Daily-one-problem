//
// Created by 李啸 on 9/30/21.
//
#include <iostream>
//一元多项式求导，输出他的非零项系数和指数
using namespace std;

int main() {
    int a, b, flag = 0;
    while (cin >> a >> b) {
        if (b != 0) {
            if (flag == 1) cout << " ";
            cout << a * b << " " << b - 1;
            flag = 1;
        }
    }
    if (flag == 0) cout << "0 0";
    return 0;
}
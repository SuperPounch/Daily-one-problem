//
// Created by 李啸 on 10/16/21.
//
#include "iostream"

using namespace std;

int main() {
    int a[10] = {0};
    for (int i = 0; i < 10; ++i) {
        cin >> a[i];
    }
    //排序输出
    bool flag = false;//是否是第一个非0 数
    for (int i = 1; i < 10; ++i) {
        if (flag && a[i] != 0) {
            while (a[i]) {
                cout << i;
                a[i]--;
            }
        } else if (flag == false && a[i] != 0) {
            cout << i;
            a[i]--;
            while (a[0]) {
                cout << 0;
                a[0]--;
            }
            while (a[i]) {
                cout << i;
                a[i]--;
            }//为什么 for 循环就有问题，判定条件错了！！！
            flag = true;
        }
    }
    return 0;
}

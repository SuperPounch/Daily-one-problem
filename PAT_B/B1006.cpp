//
// Created by 李啸 on 9/28/21.
//
#include <iostream>

using namespace std;

/*
让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10），
 换个格式来输出任一个不超过 3 位的正整数。
 例如 234 应该被输出为 BBSSS1234，因为它有 2 个“百”、3 个“十”、以及个位的 4。
*/

int main() {
    int n, i = 2;
    int *a = new int[3]();//初始化为0
    cin >> n;
    while (n) {
        a[i] = n % 10;
        n /= 10;
        i--;
    }
    i = 1;
    switch (i) {
        case 1:
            for (int j = 0; j < a[0]; ++j) {
                cout << "B";
            }
        case 2:
            for (int j = 0; j < a[1]; ++j) {
                cout << "S";
            }
        case 3:
            for (int j = 0; j < a[2]; ++j) {
                cout << j + 1;
            }
    }
    return 0;
}
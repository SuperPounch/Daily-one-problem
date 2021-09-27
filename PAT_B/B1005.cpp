//
// Created by 李啸 on 27/09/2021.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[10000];

int main() {
    int k, n, flag = 0;//flag判断是否输出的是第一个
    cin >> k;
    vector<int> v(k);
    //向量Vector，是一个封装了动态大小数组的顺序容器，可以理解为vector是一个能够存放任意类型的动态数组
    for (int i = 0; i < k; i++) {
        cin >> n;
        v[i] = n;
        while (n != 1) {
            if (n % 2 != 0) n = 3 * n + 1;
            n = n / 2;
            if (arr[n] == 1) break;
            arr[n] = 1;
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < v.size(); i++) {
        if (arr[v[i]] == 0) {//arr判断v[i]是否被判断过
            if (flag == 1) cout << " ";
            cout << v[i];
            flag = 1;
        }
    }
    return 0;
}

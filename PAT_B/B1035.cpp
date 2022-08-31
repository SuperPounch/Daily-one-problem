//
// Created by 李啸 on 11/30/21.
//
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a[100], b[100], i, j;
    cin >> n;
    for (int i = 0; i < n; i++)//初始序列
        cin >> a[i];
    for (int i = 0; i < n; i++)//某一中间序列
        cin >> b[i];
    for (i = 0; i < n - 1 && b[i] <= b[i + 1]; i++);//中间序列已排好序的位置
    for (j = i + 1; a[j] == b[j] && j < n; j++);
    if (j == n) {
        cout << "Insertion Sort" << endl;
        sort(a, a + i + 2);
    } else {
        cout << "Merge Sort" << endl;
        int k = 1, flag = 1;
        while (flag) {
            flag = 0;
            for (i = 0; i < n; i++) {//用a对比b，判断是否是中间序列
                if (a[i] != b[i])//如果不是，也会进行排序，作为输出
                    flag = 1;
            }
            k = k * 2;
            for (i = 0; i < n / k; i++)
                sort(a + i * k, a + (i + 1) * k);
            sort(a + n / k * k, a + n);//给最后不成组的进行排序
        }
    }
    for (j = 0; j < n; j++) {
        if (j != 0) printf(" ");
        printf("%d", a[j]);
    }
    return 0;
}

//
// Created by 李啸 on 10/12/21.
//
#include "iostream"

using namespace std;

int main() {
    string n;
    cin >> n;
    int a[10]={0};//初始化为0很重要
    for (int i = 0; i < n.length(); ++i) {
        a[n[i]-'0']++;
    }
    for (int i = 0; i < 10; ++i) {
        if (a[i]!=0)
            printf("%d:%d\n", i, a[i]);
    }
    return 0;
}

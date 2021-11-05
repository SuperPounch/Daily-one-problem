//
// Created by 李啸 on 11/1/21.
//

#include "iostream"

using namespace std;
int a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};//权重
int b[11] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};//校验码
string s;//前17位加权求和，第18位校验码

bool isTrue() {
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        if (s[i] < '0' || s[i] > '9')return false;
        sum += (s[i] - '0') * a[i];
    }
    int temp = (s[17] == 'X') ? 10 : (s[17] - '0');//自带的校验码
    return b[sum % 11] == temp;//取模Z得到的校验码M==自带的校验码？
}

int main() {
    int n, flag = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (!isTrue()) {//wrong
            cout << s << endl;
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "All passed";
    return 0;
}
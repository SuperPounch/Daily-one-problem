//
// Created by 李啸 on 10/4/21.
//

#include "iostream"

using namespace std;

int main() {
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    char x[2];
    int i = 0, j = 0;
    while (i < a.length() && i < b.length()) {
        if (a[i] == b[i] && a[i] >= 'A' && a[i] <= 'G') {
            x[0] = a[i];
            break;
        }
        i++;
    }//得到第一对相同的大写字母
    i++;
    while (i < a.length() && i < b.length()) {
        if (a[i] == b[i] && ((a[i] >= 'A' && a[i] <= 'N') || isdigit(a[i]))) {
            x[1] = a[i];
            break;
        }
        i++;
    }//得到第二对相同的数字或者字母
    while (j < c.length() && j < d.length()) {
        if (c[j] == d[j] && isalpha(c[j])) {
            break;//j 记录第几分钟
        } else j++;
    }
    const char *day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    //string week[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
    //和上一句是一样效果，通过指针+数组的方式来达到字符串数组的目的
    int m = isdigit(x[1]) ? x[1] - '0' : x[1] - 'A' + 10;
    cout << day[x[0] - 'A'] << " ";
    printf("%02d:%02d", m, j);
    return 0;
}
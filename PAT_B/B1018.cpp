//
// Created by 李啸 on 10/9/21.
//
#include "iostream"

using namespace std;

int main() {
    int n, x[3] = {0}, y[3] = {0};//n<=100000,x是甲赢的次数，y是乙赢的次数，平的次数=n-x-y
    cin >> n;
    if (n < 0 || n > 100000)return 0;
    for (int i = 0; i < n; ++i) {
        char a, b;
        cin >> a >> b;
        //0:B 1:C 2:J
        if (a == 'B' && b == 'C')x[0]++;
        else if (a == 'C' && b == 'J')x[1]++;
        else if (a == 'J' && b == 'B')x[2]++;
        else if (b == 'B' && a == 'C')y[0]++;
        else if (b == 'C' && a == 'J')y[1]++;
        else if (b == 'J' && a == 'B')y[2]++;
    }
    int jiawin = x[0] + x[1] + x[2];
    int yiwin = y[0] + y[1] + y[2];
    int pin = n - jiawin - yiwin;
    cout << jiawin << " " << pin << " " << yiwin << endl;
    cout << yiwin << " " << pin << " " << jiawin << endl;
    int jiamax = 0, yimax = 0;
    for (int i = 0; i < 3; ++i) {
        if (x[i] > x[jiamax])jiamax = i;
        if (y[i] > y[yimax])yimax = i;
    }
    char c[3] = {'B', 'C', 'J'};
    cout << c[jiamax] << " " << c[yimax] << endl;
    return 0;

}


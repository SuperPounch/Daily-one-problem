/*
给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：
A1= 能被 5 整除的数字中所有偶数的和;
A2= 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n1−n2+n3−n4⋯；
A3= 被 5 除后余 2 的数字的个数;
A4= 被 5 除后余 3 的数字的平均数,精确到小数点后 1 位;
A5= 被 5 除后余 4 的数字中最大数字。
*/
/*输入格式：
    每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N
    随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。
输出格式：
    对给定的 N 个正整数，按题目要求计算 A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
    若其中某一类数字不存在，则在相应位置输出 N。
*/
#include <iostream>

using namespace std;

int main() {
    int a[5] = {0};
    int b[5] = {0};
    int n, x, flag = 1;//count 记录A2中正负号
    float a3 = 0.0;
    cin >> n;
    if (n > 1000)return 0;
    while (n) {
        n--;
        cin >> x;
        if (x <= 0)break;
        switch (x % 5) {
            case 0: {
                if (x % 2 == 0) {
                    a[0] += x;
                    b[0]++;//这句不能让if外面，他和a【0】同步进行
                }
                break;
            }
            case 1: {
                if (flag) {
                    a[1] += x;
                    flag--;
                } else {
                    a[1] -= x;
                    flag++;
                }
                b[1]++;
                break;
            }
            case 2: {
                a[2]++;
                b[2]++;
                break;
            }
            case 3: {
                a[3] += x;//后面要求平均数，精确到小数点后一位
                a3++;
                b[3]++;
                break;
            }
            case 4: {
                if (x >= a[4])
                    a[4] = x;
                b[4]++;
                break;
            }
        }
    }
    if (b[0] == 0)cout << "N "; else cout << a[0] << " ";
    if (b[1] == 0)cout << "N "; else cout << a[1] << " ";
    if (b[2] == 0)cout << "N "; else cout << a[2] << " ";
    if (b[3] == 0)cout << "N ";
    else {
        a3 = a[3] / a3;
        printf("%.1f ", a3);
    }
    if (b[4] == 0)cout << "N"; else cout << a[4];
    return 0;
}
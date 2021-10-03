//
// Created by 李啸 on 10/3/21.
// 现任给两个正整数 M≤N≤10^4 ，请输出 P M 到 P N  的所有素数
#include <cmath>
#include "iostream"

using namespace std;

bool issushu(int x) {
    int k, i;
    k = (int) sqrt((double) x);
    for (i = 2; i <= k; ++i) {
        if (x % i == 0)break;
    }
    if (i > k)
        return true;
    else
        return false;
};

int main() {
    int M, N;//0<M=<N<=10000
    int count = 0;
    cin >> M >> N;
    if (M <= 0 || N <= 0 || M > N || M > 10000 || N > 10000)
        return 0;
    int *prime = new int[N];
    for (int i = 2; !prime[N - 1]; ++i) {//i->算素数  count->算第几个
        if (issushu(i)) {
            prime[count] = i;
            count++;
        }
    }
    for (int i = M - 1, j = 0; i < N; ++i) {
        j++;
        cout << prime[i];
        if (j == 10||i==N-1){
            cout << endl;
            j=0;
        }
        else cout << " ";
    }
    return 0;
}

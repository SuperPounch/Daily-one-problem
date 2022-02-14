//
// Created by 李啸 on 2022/2/14.
//A+B for Polynomials (25)
#include "cstdio"

const int max_n = 1111;
double p[max_n] = {};

int main() {
    int k, n, count = 0;
    double a;
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d %lf", &n, &a);
        p[n] += a;//相加
    }
/*    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d %lf", &n, &a);
        p[n] += a;//相加
    }*/
    for (int i = 0; i < max_n; ++i) {//对多项式进行相加后的判断
        if (p[i] != 0) {
            count++;
        }
    }
    printf("%d", count);
    for (int i = max_n - 1; i >= 0; i--) {//从后向前=从高到低
        if (p[i] != 0)printf(" %d %.lf", &i, &p[i]);
    }
    return 0;
}


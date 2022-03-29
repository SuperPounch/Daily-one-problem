//
// Created by 李啸 on 2022/3/27.
//
#include "stdio.h"
#include "omp.h"

void main(int argc, char *argv[]) {
    int s = 0, i = 0;
    int a[100];
#pragma omp parallel for
    for (i = 0; i < 100; i++) {
        a[i] = i;
#pragma omp critical
        s += a[i];
    }
    printf("S=%d\n", s);
}

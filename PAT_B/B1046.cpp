//
// Created by 李啸 on 2022/1/25.
//
#include "iostream"

int main() {
    int n, failA = 0, failB = 0;//甲和乙输的次数就是output
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int a1, a2, b1, b2;
        scanf("%d%d%d%d", &a1, &a2, &b1, &b2);//甲喊、甲划、乙喊、乙划
        if (a1 + b1 == a2 && a1 + b1 != b2)
            failB++;//乙lose
        else if (a1 + b1 != a2 && a1 + b1 == b2)
            failA++;
    }
    printf("%d %d\n", failA, failB);
}
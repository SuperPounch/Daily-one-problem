//
// Created by 李啸 on 9/29/21.
//
#include "iostream"

using namespace std;

int main() {
    int N, M, num;
    cin >> N >> M;
    int *a = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> num;
        a[(i + M) % N] = num;
    }
    for (int i = 0; i < N; ++i) {
        if (i == N - 1)cout << a[i];
        else cout << a[i] << " ";
    }
    return 0;
}
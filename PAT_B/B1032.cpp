//
// Created by 李啸 on 11/5/21.
//挖掘技术哪家强
#include "iostream"
#include "vector"
using namespace std;
#include <iostream>
using namespace std;
int main() {
    cout << __VERSION__ << endl;
    return 0;
}
/*int main() {
    int N;
    cin >> N;
    vector<int> a(N + 1);
    int num, score;
    for (int i = 0; i < N; ++i) {
        cin >> num >> score;
        a[num] += score;
    }
    int max = a[1], t = 1;
    for (int i = 2; i <= N; ++i) {
        if (max < a[i]) {
            max = a[i];
            t = i;
        }
    }
    cout << t << " " << max;
    return 0;
}*/


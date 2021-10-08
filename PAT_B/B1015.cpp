//
// Created by 李啸 on 10/5/21.
//

#include "iostream"
#include "vector"

using namespace std;
//not finished
//just understand vector
int main() {
    /*int N, L, H;
    cin >> N >> L >> H;
    if (N < 0 || N > 100000 || L < 60 || H >= 100 || L >= H)return 0;*/
    vector<int> ad[3];
    ad[0].push_back(1);
    ad[0].push_back(2);
    ad[0].push_back(3);

    ad[1].push_back(1);
    ad[1].push_back(1);

    ad[2].push_back(2);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < ad[i].size(); ++j)
            //printf("%d",ad[i][j]);
        cout<<ad[i][j];
    }
    ad[2].push_back(2);
    return 0;
}
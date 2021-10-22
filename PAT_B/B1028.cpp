//
// Created by 李啸 on 10/22/21.
//
#include "iostream"

using namespace std;

int main() {
    int n;
    cin >> n;
    string name, birth, maxname, minname, maxbirth = "1814/09/06", minbirth = "2014/09/06", cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> name >> birth;
        if (birth >= maxbirth && birth <= minbirth)
            cnt++;
        if (birth>=maxbirth){
            maxbirth=birth;
            maxname=name;
        }    if (birth<=minbirth){
            minbirth=birth;
            minname=name;
        }
    }
    return 0;
}

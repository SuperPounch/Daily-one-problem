//
// Created by 李啸 on 26/09/2021.
//
#include <iostream>

using namespace std;

/*B1004:成绩排名
 */

int main() {
    int n, max = -1, min = 101, score;
    cin >> n;
    string maxname, maxnum, minname, minnum, name, num;
    for (int i = 0; i < n; ++i) {
        cin>>name>>num>>score;
        if(min>score){
            min=score;
            minname=name;
            minnum=num;
        }
        if(max<score){
            max=score;
            maxname=name;
            maxnum=num;
        }
    }
    cout<<maxname<<" "<<maxnum<<endl<<minname<<" "<<minnum;
    return 0;
}

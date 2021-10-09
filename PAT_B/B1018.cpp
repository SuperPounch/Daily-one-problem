//
// Created by 李啸 on 10/9/21.
//
#include "iostream"
using namespace std;
int main(){
    int n,x[3],y[3];//n<=100000,x是甲赢的次数，y是乙赢的次数，平的次数=n-x-y
    cin >> n;
    if(n<0||n>100000)return 0;
    while(n){
        char a,b;cin>>a>>b;
        cout<<a<<b;
        n--;
    }
    return 0;
}


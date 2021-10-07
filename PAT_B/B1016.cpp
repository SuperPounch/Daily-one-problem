//
// Created by 李啸 on 10/7/21.
//
#include <iostream>
using namespace std;

int main(){
    long long int a,b;
    int da,db,suma=0,sumb=0;

    cin >> a>>da>>b>>db;
    while(a){
        if(a%10==da)suma=da+10*suma;
        a/=10;
    }
    while(b){
        if(b%10==db )sumb=db+10*sumb;
        b/=10;
    }
    cout<<suma+sumb;
    return 0;
}


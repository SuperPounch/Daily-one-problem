//
// Created by 李啸 on 10/19/21.
//
#include "iostream"

using namespace std;

int main() {
    int c1,c2,h,m,t,s;
    cin>>c1>>c2;
    t =(c2-c1+50)/100;//+50是为了对不足1秒的时间四舍五入到秒
    h=t/3600;
    t%=3600;
    m=t/60;
    s=t%60;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}
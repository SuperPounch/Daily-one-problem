//
// Created by 李啸 on 2022/2/3.
//
#include "cstdio"
int main(){
    int T=0,tcase=1;
    scanf("%d",&T);
    while (T--){
        long long a ,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        long long res =a+b;//res restore a+b
        bool flag;//final answer
        if (a>0&&b>0&&res<0)flag= true;//正溢出为true
        else if(a<0&&b<0&&res>=0)flag= false;//负溢出为false
        else if(res>c)flag= true;//无溢出时，A+B>C为true
        else flag= false;//无溢出时，A+B<=C为false
        if(flag== true)printf("Case #%d: true\n",tcase++);
        else printf("Case #%d: false\n",tcase++);
    }
    return 0;
}
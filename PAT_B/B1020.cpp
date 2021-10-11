//
// Created by 李啸 on 10/11/21.
//
#include "iostream"

using namespace std;

int main() {
    int n, d;//月饼种类，市场需求量
    cin >> n >> d;
    if (n > 1000 || d > 500)return 0;
    //a[]库存，s[]售价
    float a[n], s[n], as[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    //as[]记录每吨的售价
    for (int i = 0; i < n; i++)
        as[i] = s[i] / a[i];
    //给as[]排序，那要怎么记录答案？
    //不要排序，直接早最大的，然后记录他的库存量，没满足就接着往下照
    float lirun = 0.0;
    while (d!=0) {
        int max = 0;
        for (int i = 0; i < n; i++)
            if (as[i] > as[max])
                max = i;//找到每组利润最大的下标

        if (a[max] <= d) {
            lirun = lirun + s[max];
            d =d- a[max];
            as[max] = 0.0;
        } else {
            lirun = lirun + as[max] * d;
            break;
        }
        //算利润
    }
    printf("%.2f", lirun);
    return 0;
}

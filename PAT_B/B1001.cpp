//
// Created by 李啸 on 27/09/2021.
//

#include <iostream>
using namespace std;
int main(){
    int n,count=0;//count 记录走了多少步
    cin >> n;
    while (n!= 1){
        if(n%2!=0){
            n=(3*n+1)/2;
        } else
            n/=2;
        cout << n<<" ";
        count++;
    }
    return 0;
}
//
// Created by 李啸 on 10/1/21.
//
/*
给定区间内的 3 个整数 A、B 和 C，请判断 A+B 是否大于 C。
输入格式：
        输入第 1 行给出正整数 T (≤10)，是测试用例的个数
        随后给出 T 组测试用例，每组占一行，顺序给出 A、B 和 C。整数间以空格分隔。
输出格式：
        对每组测试用例，在一行中输出 Case #X: true 如果 A+B>C，
            否则输出 Case #X: false，其中 X 是测试用例的编号（从 1 开始）。
*/
#include "iostream"

using namespace std;

int main() {
    int T;
    long long int A, B, C;//T-几组
    cin >> T;
    if (T>10)return 0;//这一步成为成功的关键
    for (int i = 1; i <=T; ++i) {
        cin >> A >> B >> C;
        if(A+B>C){
            cout << "Case #" << i  << ": " << "true"<<endl;
        }
        else{
            cout << "Case #" << i<< ": " << "false"<<endl;
        }
    }
    return 0;
}

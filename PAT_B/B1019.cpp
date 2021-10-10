//
// Created by 李啸 on 10/9/21.
//
#include "iostream"
#include "algorithm"

using namespace std;

bool cmp(char a, char b) { return a > b; }

int main() {
    string s;
    cin >> s;
    s.insert(0, 4 - s.length(), '0');//防止s没有四位数
    do{
        string a=s,b=s;
        sort(a.begin(),a.end(), cmp);
        sort(b.begin(),b.end());
        int result = stoi(a)- stoi(b);
        s= to_string(result);
        s.insert(0,4-s.length(),'0');
        cout<<a<<" - "<<b<<" = "<<s<<endl;
    } while (s!="6174"&&s!="0000");
    return 0;
}
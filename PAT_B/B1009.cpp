//
// Created by 李啸 on 9/30/21.
//
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<string> v;
    string s;;
    while (cin >> s)
        v.push(s);
    cout << v.top();
    v.pop();
    while (!v.empty()) {
        cout << " " << v.top();
        v.pop();
    }
    return 0;
}
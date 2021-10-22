//
// Created by 李啸 on 10/22/21.
//

#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s1, s2, ans;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
        //如果没有，ans里也没有，就加进ans里
        if (s2.find(s1[i]) == string::npos && ans.find(toupper(s1[i])) == string::npos)
            //npos可以表示string的结束位子，是string::type_size 类型的，
            // 也就是find（）返回的类型。find函数在找不到指定值得情况下会返回string::npos
            ans += toupper(s1[i]);//转换成大写
    cout << ans;
    return 0;
}
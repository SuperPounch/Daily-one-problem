#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int i = 0;
    while (s[i] != 'E') i++;//i记录E的位置
    string t = s.substr(1, i - 1);//E前面的数字
    //返回一个新建的 初始化为string对象的子串的拷贝string对象。
    //子串是，在字符位置pos开始，跨越len个字符（或直到字符串的结尾，以先到者为准）对象的部分。
    int n = stoi(s.substr(i + 1));//E后面的指数（带符号）
    if (s[0] == '-') cout << "-";//输出符号
    //以上完成准备工作
    if (n < 0) {
        cout << "0.";
        for (int j = 0; j < abs(n) - 1; j++) cout << '0';//abs(n)取n的绝对值，abs(n)-1是规则
        for (int j = 0; j < t.length(); j++)
            if (t[j] != '.') cout << t[j];//输出除小数点的数字
    } else {
        cout << t[0];
        int cnt, j;//j指向下一哥要处理的字符位置，cnt记录指数被用掉的次数
        for (j = 2, cnt = 0; j < t.length() && cnt < n; j++, cnt++) cout << t[j];
        if (j == t.length()) {//指数数已经超过原本小数末尾
            for (int k = 0; k < n - cnt; k++) cout << '0';//还差几个=n-cnt
        } else {
            cout << '.';
            for (int k = j; k < t.length(); k++) cout << t[k];
        }
    }
    return 0;
}

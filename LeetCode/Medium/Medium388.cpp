// 文件的最长绝对路径
// Created by 李啸 on 2022/4/22.
//
#include "iostream"
#include "stack"

using namespace std;

class Solution {
public:
    int lengthLongestPath(string input) {
        int n = input.size();
        int pos = 0, ans = 0;//ans 记录最长绝对路径长度
        stack<int> st;

        while (pos < n) {
            cout << "//检测当前文件的深度:";
            int depth = 1;//每次检测深度前，初始化深度为1，在while里检测到几个"\t"，这样depth得到的结果就是第几层！！懂了
            while (pos < n && input[pos] == '\t') {
                cout << "pos=" << pos << " ";
                pos++;
                depth++;
            }
            cout << "depth=" << depth << endl;
            cout << "//统计当前文件名的长度:";
            int len = 0;
            bool isfile = false;
            while (pos < n && input[pos] != '\n') {//换行前的文件名，pos记录长度
                if (input[pos] == '.')isfile = true;
                len++;
                pos++;
            }
            pos++;//skip \n, while结束时的pos就是'\n'的位置，++跳过\'n'
            cout << "skip \\n,pos=" << pos << endl << "----------------" << endl;
            while (st.size() >= depth)
                st.pop();
            if (!st.empty())
                len += st.top() + 1;
            if (isfile)
                ans = max(ans, len);
            else {
                st.emplace(len);
            }
        }
        return ans;
    }
};

int main() {
    string input = "dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext";
    string input2 = "dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext";
    Solution s;
    s.lengthLongestPath(input);
    s.lengthLongestPath(input2);
}
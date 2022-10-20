#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int kthGrammar(int n, int k) {
        //倒推，从n行第k个往上倒退，如果推出0，则k是正确的，否则相反
        // bool flag = false;
        //预设第k个是1
        int num = 1, index = k;
        //判断行和下标,行和每行元素的下标都是从1开始
        for (int i = n; i > 0; i--) { //遍历每一行
            num = index%2==1?num:1-num;
            index = (index + 1) / 2;//上一行的下标
        }
        return num == 0 ? 1:0;
    }
};

int main() {
    Solution s;
    s.kthGrammar(1, 1);
    s.kthGrammar(2, 1);
}

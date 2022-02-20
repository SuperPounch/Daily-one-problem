//
// Created by 李啸 on 2022/2/20.
//
//1 bite and 2 bites string
//1 bite = 0 ; 2 bites = {10 , 11 }

#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        const int N = bits.size();
        int pos = 0;
        while (pos < N - 1) {
            pos += bits[pos] == 1 ? 2 : 1;
        }
        return pos == N - 1;
    }
};

/*作者：fuxuemingzhu
链接：https://leetcode-cn.com/problems/1-bit-and-2-bit-characters/solution/fu-xue-ming-zhu-tu-jie-suan-fa-zou-yi-bu-shvh/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。*/
int main(){
    Solution solution;
    vector<int> bits(4);
    bits={1,1,1,0};
    cout<<solution.isOneBitCharacter(bits);
    return 0;
}
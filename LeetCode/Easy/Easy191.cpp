#include <cstdint>
#include "iostream"
#include "vector"
#include "unordered_set"
#include "algorithm"
#include "queue"

using namespace std;

/*class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n){
            n&=(n-1);
            ans++;
        }
        return ans;
    }
};*/
/*class Solution {
public:
    int getKthMagicNumber(int k) {
        vector<long> ugly={3,5,7};
        //记录生成的数字，哈希表防止出现重复的数
        unordered_set<long> nums;
        //最小堆
        priority_queue<long ,vector<long> ,greater<long>> minheap;

        nums.insert(1L);
        minheap.push(1L);

        int res=0;

        for(int i =0; i < k; i++){
            //输出堆顶=第i个丑数
            res= minheap.top();
            minheap.pop();
            //加入新的丑数，入set和heap
            for(long x:ugly){
                long next = res*x;
                if(!nums.count(next)){
                    nums.insert(next);
                    minheap.push(next);
                }
            }
        }
        return res;
    }
};*/
/*class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        *//*消除末尾的1==》n &= n - 1;
         * while (n != 0) {
            res++;
            n &= (n - 1);//这是特殊的位运算的好处
        }*//*
        //计算32次右移
        vector<int> a;a.
       while(n){
            res=n&1;
            n>>=1;
            cout<<res<<endl;
        }
        return res;
    }
};*/

int main() {
    Solution solution;
    solution.hammingWeight(4);
}

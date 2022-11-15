//
// Created by 李啸 on 2022/10/23.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include "math.h"
#include "queue"
#include "unordered_set"

using namespace std;

class Solution1 {
public:
    bool haveConflict(vector<string> &event1, vector<string> &event2) {
        string a1 = event1[0].substr(0, 2);
        string a2 = event1[0].substr(3, 2);
        string b1 = event1[1].substr(0, 2);
        string b2 = event1[1].substr(3, 2);
        string c1 = event2[0].substr(0, 2);
        string c2 = event2[0].substr(3, 2);
        string d1 = event2[1].substr(0, 2);
        string d2 = event2[1].substr(3, 2);
        int Ha1 = stoi(a1), Hb1 = stoi(b1), Hc1 = stoi(c1), Hd1 = stoi(d1);
        int Ma2 = stoi(a2), Mb2 = stoi(b2), Mc2 = stoi(c2), Md2 = stoi(d2);
        //event1<event2:Hc1>Hb1||
        if (Hc1 > Hb1 || (Hc1 == Hb1 && Mc2 > Mb2))
            return false;
        //event2<event1
        if (Ha1 > Hd1 || (Ha1 == Hd1 && Ma2 > Md2))
            return false;
        return true;//有交集
    }

    //11.6 318场
public:
    vector<int> applyOperations(vector<int> &nums) {
        int cnt0 = 0, n = nums.size();
        vector<int> nu;
        for (int i = 0; i < n - 1; i++) {
            //operation
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
                if (nums[i] == 0) {
                    cnt0++;
                } else {
                    nu.push_back(nums[i]);
                }
            } else {
                if (nums[i] == 0) {
                    cnt0++;
                } else {
                    nu.push_back(nums[i]);
                }
            }
        }
        if (nums[n - 1] != 0) {
            nu.push_back(nums[n - 1]);
        } else {
            cnt0++;
        }
        cout << cnt0;
        for (int i = 0; i < cnt0; i++) {
            nu.push_back(0);
        }
        return nu;
    }

    int countConsistentStrings(string allowed, vector<string> &words) {
        int n = allowed.length();
        int ans = 0;
        unordered_set<char> s;
        for (int i = 0; i < n; i++) {
            s.emplace(allowed[i]);
        }
        for (int i = 0; i < words.size(); i++) {
            bool flag = true;
            for (int j = 0; j < words[i].length(); j++) {
                if (s.count(words[i][j]) == 0) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans++;
        }
        return ans;
    }

};

class Solution {
    const int MOD = 1e9 + 7;
public:
    int distinctAverages(vector<int> &nums) {
        unordered_set<double> average;
        int len = nums.size();
        sort(nums.begin(), nums.begin() + len);
        for (int i = 0; i < len / 2; ++i) {
            double ave = (double) (nums[i] + nums[len - 1 - i]) / 2;
            cout << "ave=" << ave << " ";
            average.emplace(ave);
        }
        return average.size();
    }

    int countGoodStrings(int low, int high, int zero, int one) {
        int start_0=zero,start_1=one;
        queue<int> queue1;
        queue1.push(start_0),queue1.push(start_1);
        //start
        int  ans = 0;
        while(!queue1.empty()) {
            int i = queue1.front();
            if(i>=low&&i<=high){
                ans =(ans+1)%MOD;
            }
            queue1.pop();
            if(i+zero<=high){
                queue1.push(i+zero);
            }
            if(i+one<=high){
                queue1.push(i+one);
            }
        }
        pow(1,2);
        return ans;
    }
};
class Solution319 {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size();
        //vector<vector<int>> dp(n,vector<int>(n,0));//记录i-j的子数组的最小公倍数

        deque<int> cur;
        //每次找到一个完整的子数组
        for(int i = 0; i < n; ++i){
            if(k/nums[i]==0){

            }
        }

    }

};
int main() {
    Solution s12;
    vector<int> nums = {9, 5, 7, 8, 7, 9, 8, 2, 0, 7};
    string t = "";
    t+="0";
    cout<<t<<endl;
    t+="1";
    cout<<t;
    //cout << "ans=" << s12.distinctAverages(nums);

    //1
    Solution1 s;
    vector<string> event1 = {"01:15", "02:00"}, event2 = {"02:00", "03:00"};
    //s.haveConflict(event1, event2);
    //
    string allowed = "ab";
    vector<string> words = {"ad", "bd", "aaab", "baa", "badab"};
    //s.countConsistentStrings(allowed, words);
}

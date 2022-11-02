//
// Created by 李啸 on 2022/10/23.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include "unordered_set"
using namespace std;

class Solution {
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

};

int main() {
    Solution s;
    //1
    vector<string> event1 = {"01:15", "02:00"}, event2 = {"02:00", "03:00"};
    s.haveConflict(event1, event2);

}

//我的日程安排1
// Created by 李啸 on 2022/7/5.


#include "iostream"
#include "vector"

using namespace std;

class MyCalendar {
    vector<pair<int,int>>booked;
public:
    MyCalendar() {}
    //法一:直接遍历
    bool book(int start, int end) {
        for(auto &[l,r]:booked){
            if (l<end&&start<r){
                return false;
            }
        }
        booked.emplace_back(start,end);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
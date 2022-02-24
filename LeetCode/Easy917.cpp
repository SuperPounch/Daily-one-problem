//
// Created by 李啸 on 2022/2/24.
//仅仅反转字母
//给字符串s，所有非英文字母保留在原有位置。
//所有英文字母（小写或大写）位置反转。
//
//解题思路：双指针
//left从左往右扫描，right从右往左扫描
//交换条件：两指针都扫描到字母，且left<right，交换s[left] and s[right]

#include "iostream"

using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.size();
        int left = 0, right = n - 1;
        while (true) {
            while (left < right && !isalpha(s[left])) { // 判断左边是否扫描到字母，直到扫描到字母位置
                left++;
            }
            while (right > left && !isalpha(s[right])) { // 判断右边是否扫描到字母，直到扫描到字母位置
                right--;
            }
            if (left >= right) {  // 此时两指针交错，表示交换结束
                break;
            }
            swap(s[left], s[right]);
            left++;
            right--;
        }//一次while循环完成一次交换
        return s;
    }
};

//LeetCode官解
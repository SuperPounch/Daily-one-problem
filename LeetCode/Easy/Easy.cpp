//
// Created by 李啸 on 2022/11/8.
//
#include "iostream"
#include "vector"
#include "string"
#include "algorithm"
#include "math.h"
#include "unordered_set"
#include "unordered_map"

using namespace std;

class Solution {
public:
    void reverseString(vector<char> &s) {
        int n = s.size();
        int left = 0, right = n - 1;
        while (left <= right) {
            swap(s[left++], s[right--]);
        }
    }

    string reverseWords(string s) {
        int len = s.length();
        int i = 0;
        while (i < len) {
            int start = i;
            while (i < len && s[i] != ' ') {
                i++;
            }//i结束的位置就是空格的下标
            int left = start, right = i - 1;
            while (left < right)swap(s[left++], s[right--]);
            while (i < len && s[i] == ' ')i++;
        }
        return s;
    }

    //876.链表的中间节点
    struct ListNode {
        int val;
        ListNode *next;

        ListNode() : val(0), next(nullptr) {}

        ListNode(int x) : val(x), next(nullptr) {}

        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    ListNode *middleNode(ListNode *head) {
        //快慢指针
        ListNode *slow = head, *fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};

class Solution733 {
public:
//将变换四个方向用数组来表示，就不需要记录行列大小了吧
    //const int dx[4] = {1, 0, 0, -1};
    //const int dy[4] = {0, 1, -1, 0};
    void paint(vector<vector<int>> &image, int sr, int sc, int old, int color) {
        int row = image.size(), col = image[0].size();
        if (image[sr][sc] == old) {
            image[sr][sc] = color;
            if (sr - 1 >= 0)paint(image, sr - 1, sc, old, color);
            if (sr + 1 < row)paint(image, sr + 1, sc, old, color);
            if (sc - 1 >= 0)paint(image, sr, sc - 1, old, color);
            if (sc + 1 < col)paint(image, sr, sc + 1, old, color);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color) {
        //改变的像素点的值==初始像素点的值
        static int old = image[sr][sc];//加了static ，old貌似不能变？
        if (old != color) {
            paint(image, sr, sc, old, color);
        }
        return image;
    }

};

int main() {
    Solution733 solution733;
    vector<vector<int>> image = {{0,0,0},{0,0,0}};
    int sr=1,sc=0,color=2;
    solution733.floodFill(image,sr,sc,color);
    for(auto r : image){
        for(int i:r)cout<<i;
        cout<<endl;
    }
/*    int d = 1;
    static int old = d;
    d = 2;
    cout << d << " " << old;*/
}

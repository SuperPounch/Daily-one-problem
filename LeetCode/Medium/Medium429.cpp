//N叉树的层序遍历
// Created by 李啸 on 2022/4/8.
#include <queue>
#include "iostream"
#include "vector"

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node *> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    //BFS
    vector<vector<int>> levelOrder(Node *root) {
        if (!root)
            return {};
        vector<vector<int>> ans;
        queue<Node *> q;
        q.push(root);
        while (!q.empty()) {//不为空
            int cnt = q.size();
            vector<int> level;//record the ans in now level
            for (int i = 0; i < cnt; ++i) {//非空元素会放入当前层level里
                Node *cur = q.front();//queue.front()==当前队首元素
                q.pop();//出队
                level.push_back(cur->val);//从队列中取数，存储
                for (Node *child: cur->children)//遍历树，加入队列
                    q.push(child);
            }
            //for (auto c: level)cout << c;
            ans.push_back(move(level));
            //ans.push_back(level);
            //move()结果一样
        }
        return ans;
    }
};
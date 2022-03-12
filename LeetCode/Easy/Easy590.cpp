//N叉树 - 后序遍历
// Created by 李啸 on 2022/3/12.
//
//emplace_back()和push_back()的区别----底层实现的机制不同。
//push_back() 向容器尾部添加元素时，首先会创建这个元素，然后再将这个元素拷贝或者移动到容器中（
// 如果是拷贝的话，事后会自行销毁先前创建的这个元素）；
//emplace_back() 在实现时，则是直接在容器尾部创建这个元素，省去了拷贝或移动元素的过程。
#include "iostream"
#include "vector"

using namespace std;
//法 1: 递归

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
    void helper(const Node *root, vector<int> &res) {
        if (root== nullptr)
            return;
        for (auto&ch :root->children) {
            helper(ch,res);
        }
        res.emplace_back(root->val);
    }

    vector<int> postorder(Node *root) {
        vector<int>res;
        helper(root,res);
        return res;
    }
};
//end
// 法 2 : 非递归==迭代？

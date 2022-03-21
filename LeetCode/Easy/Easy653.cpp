//简单题653 ： 两数之和IV 输入BST
// Created by 李啸 on 2022/3/21.
//

//Definition for a binarytree node
#include "iostream"
#include "unordered_set"
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
//方法1：深度优先搜索+哈希表，还有法二（广度优先+哈希表）法三（深度优先+中序遍历+双指针）//并没有写哦！！！！！
class Solution {
public:
    //创建哈希表
    std::unordered_set<int> hashtable;

    bool findTarget(TreeNode *root, int k) {
        if(root== nullptr)
            return false;
        if(hashtable.count(k-root->val))
            return true;
        //如果hash表里没有对应的值，就把当前节点值放入表中

        hashtable.insert(root->val);
        return findTarget(root->left,k)|| findTarget(root->right,k);
    }
};

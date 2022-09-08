//
// Created by 李啸 on 2022/9/5.
//
#include <iostream>
#include "vector"
#include "string"
#include "unordered_map"
#include "unordered_set"

using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        dfs(root);
      /*  for(auto c:repeat){
            cout<<"repeat"<<c->val;
        }*/
        return {repeat.begin(), repeat.end()};
    }

    string dfs(TreeNode* node) {
        if (!node) {
            return "";
        }
        //cout<<node->val<<":";
        string serial = to_string(node->val) + "" + dfs(node->left) + "" + dfs(node->right) + "";
        //cout<<endl<<serial;
        if (auto it = seen.find(serial); it != seen.end()) {
           // cout<<1<<seen.end()->second->val<<seen.end()->first<<endl;
            repeat.insert(it->second);
        }
        else {
            cout<<node->val;
            seen[serial] = node;
        }
        return serial;
    }

private:
    unordered_map<string, TreeNode*> seen;//存储序列化子树
    unordered_set<TreeNode*> repeat;
};


int main() {
    Solution solution;
    TreeNode node4l = TreeNode(4, nullptr, nullptr);
    //TreeNode* node4r = TreeNode(4, nullptr, nullptr);
    TreeNode node2 = TreeNode(2, &node4l, nullptr);
    TreeNode node3 = TreeNode(3, &node2, &node4l);
    TreeNode node1 = TreeNode(1, &node2, &node3);

    solution.findDuplicateSubtrees(&node1);

    return 0;
}
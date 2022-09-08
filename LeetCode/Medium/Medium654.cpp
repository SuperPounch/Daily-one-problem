//654.最大二叉树
// Created by 李啸 on 2022/8/31.
//二叉树问题->1:遍历二叉树类型->2.分解子问题类型
//用模版写出子问题的函数，主函数直接递归

#include "vector"
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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(nums,0,nums.size()-1);
    }
    TreeNode* construct(const vector<int>& nums,int left, int right){
        //vector后跟<>,错写成()
        //base case
        if(left>right){
            return nullptr;
        }
        //find max and its index
        int index = left;
        //index must = left, not 0
        for(int i = left+1; i <=right; i++){
            if(nums[index]<nums[i]){
                index = i ;
            }
        }
        //build tree
        TreeNode* root = new TreeNode(nums[index]);
        root->left=construct(nums,left,index-1);
        root->right=construct(nums,index+1,right);

        return root;
    }

};


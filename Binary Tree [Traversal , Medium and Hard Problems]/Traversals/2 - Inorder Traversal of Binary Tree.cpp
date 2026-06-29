#include<bits/stdc++.h>
using namespace std;


 // Definition for a binary tree node.
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
    vector<int> data;

    void traversal(TreeNode* root){
        if(root == nullptr){
            return;
        }
        traversal(root->left);
        data.push_back(root->val);
        traversal(root->right);
    }

    vector<int> InorderTraversal(TreeNode* root) {
        traversal(root);
        return data;
    }
};
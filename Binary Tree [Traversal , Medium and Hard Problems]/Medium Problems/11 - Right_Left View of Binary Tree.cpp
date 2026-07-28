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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightSide;
        if(root == nullptr){
            return rightSide;
        }

        queue<TreeNode*> q;
        vector<vector<int>> ans;

        q.push(root);
        while(!q.empty()){
            vector<int> level;
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();


                if(node->left != nullptr){
                    q.push(node->left);
                }
                if(node->right != nullptr){
                    q.push(node->right);
                }
                level.push_back(node->val);
            }
            ans.push_back(level);
        }

        for(int i=0;i<ans.size();i++){
            int temp = ans[i][(ans[i].size())-1];
            rightSide.push_back(temp);
        }
    return rightSide;
    }
};
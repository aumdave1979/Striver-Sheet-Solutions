#include<bits/stdc++.h>
using namespace std;


//  Definition for a binary tree node.
 struct TreeNode {
     int data;
     TreeNode *left;
     TreeNode *right;
      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 };


class Solution{
public:

    void Lefttraversal(TreeNode* root , vector<int>&arr){
        if(root == nullptr) return;
        if(root->left == nullptr && root->right == nullptr){
            return;
        }
        arr.push_back(root->data);
        if(root->left != nullptr){
            Lefttraversal(root->left,arr);
        }
        else{
            Lefttraversal(root->right, arr);
        }
        return;
    }

    void rightTraversal(TreeNode* root, vector<int> &nums){
        if(root==nullptr) return;
        if(root->left == nullptr && root->right == nullptr) return;

        if(root->right != nullptr){
            rightTraversal(root->right,nums);
        }
        else{
            rightTraversal(root->left,nums);
        }
        nums.push_back(root->data);
    }


    void leaf_node(TreeNode* root , vector<int>&nums){
        if(root==nullptr) return;
        
        if(root->left == nullptr && root->right == nullptr){
            nums.push_back(root->data);
            return;
        }
        leaf_node(root->left,nums);
        leaf_node(root->right,nums);
    }

    vector <int> boundary(TreeNode* root){
        vector<int> ans;
        if(root == nullptr) return ans;

        ans.push_back(root->data);
        Lefttraversal(root->left,ans);
        leaf_node(root->left,ans);
        leaf_node(root->right,ans);
        rightTraversal(root->right,ans);
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;

//  Definition for a binary tree node.
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr){
            return true;
        }
        if(p==nullptr && q!=nullptr) return false;
        if(p!=nullptr && q==nullptr) return false;
        if(p->val != q->val) return false;

        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};

 // Vector Based approch Traversal based solution
/*
class Solution {
public:
    vector<int> data1;
    vector<int>data2;

    void traversal(TreeNode* root){
        if(root == nullptr){
            data1.push_back(INT_MIN);
            return;
        }
        data1.push_back(root->val);
        traversal(root->left);
        traversal(root->right);
    }
    void traversal2(TreeNode* root){
        if(root == nullptr){
            data2.push_back(INT_MIN);
            return;
        }

        data2.push_back(root->val);
        traversal2(root->left);
        traversal2(root->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        traversal(p);
        traversal2(q);
        if(data1 == data2) return true;

        return false;
    }
};*/
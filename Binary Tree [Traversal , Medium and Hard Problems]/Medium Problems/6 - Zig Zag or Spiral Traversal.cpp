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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr) return ans;

        queue<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            int size = st.size();
            vector<int> level;
            for(int i =0;i<size;i++){
                TreeNode* q = st.front();
                st.pop();
                if(q->left != nullptr){
                    st.push(q->left);
                }
                if(q->right != nullptr){
                    st.push(q->right);
                }
                level.push_back(q->val);
            }
            ans.push_back(level);
        }
        for(int i=1;i<ans.size();i+=2){
            reverse(ans[i].begin(),ans[i].end());
        }
    return ans;
    }
};
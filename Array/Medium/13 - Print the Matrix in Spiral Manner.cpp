#include<bits/stdc++.h>
using namespace std;

/*
- at first it will print from left to right
 then it will go from top to bottom
 then checking condition that if there are elements then will move from right to left
then again from bottom to top
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        int top = 0 , bottom = n-1;
        int left = 0 , right = m-1;

        while(top <= bottom && left<=right){
            //moving from left to right
            for(int i = left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;

            //moving from top to bottom
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            if(top<=bottom){
            //moving from right to left
            for(int i = right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            } 
            bottom--;
            }

            if(left<=right){
            //moving from bottom to top
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
            }
        }
    return ans;
    }
};
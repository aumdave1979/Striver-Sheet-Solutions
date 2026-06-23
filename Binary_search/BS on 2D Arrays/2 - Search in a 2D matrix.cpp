#include<bits/stdc++.h>
using namespace std;

/* Brute Force to check tle occurs or not

class Solution {
public:
    // brute force will give the tle lets check
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i =0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};
*/
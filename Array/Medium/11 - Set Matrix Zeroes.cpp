#include<bits/stdc++.h>
using namespace std;



// brute force solution 
/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector <vector<int>> positions;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    positions.push_back({i, j});
                }
            }
        }
        for (auto pos : positions) {
            int row = pos[0];
            int col = pos[1];

            for (int j = 0; j < n; j++) {
                matrix[row][j] = 0;
            }

            for (int i = 0; i < m; i++) {
                matrix[i][col] = 0;
            }
        }
    }
};
*/
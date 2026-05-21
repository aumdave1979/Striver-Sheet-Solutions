#include<bits/stdc++.h>
using namespace std;

/*
Optimized Approch 
First transpose the matrix with swapping the elements leaving the diagonal one 
and then reverse each row of the transposed matrix will rotate
*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};


//brute force solution with help of one more vector<vector<int>>
/*
int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int m = matrix.size();

    vector<vector<int>> rotated(m,vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            rotated[j][m-1-i] = matrix[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout << rotated[i][j] << " ";
        }
    cout << endl;
    }
}  
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans = {{1},{1,1}};
        if(numRows == 1){
            ans.pop_back();
            return ans;
        }
        else if(numRows == 2){
            return ans;
        }
        else{
            for(int i = 3; i <= numRows; i++){
                vector<int> temp;
                temp.push_back(1);
                for(int j =1; j<ans.back().size();j++){
                    temp.push_back(ans.back()[j-1] + ans.back()[j]);
                }
                temp.push_back(1);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
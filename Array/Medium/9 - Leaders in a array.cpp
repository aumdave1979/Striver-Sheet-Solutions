#include<bits/stdc++.h>
using namespace std;

// TC = N
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> leaders;
      int n = nums.size();
      int max = nums[n-1];
      leaders.push_back(max);
      for(int i=n-2;i>=0;i--){
        if(nums[i]>max){
            max = nums[i];
            leaders.push_back(max);
        }
      }
      reverse(leaders.begin(),leaders.end());
    return leaders;
    }
};

// Brute Force approch
/*
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
    vector<int> leaders;
    for(int i=0;i<nums.size();i++){
    bool flag = true;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]>nums[i]){
                flag = false;
            }
        }
        if(flag == true){
            leaders.push    _back(nums[i]);
        }
      }
    return leaders;
    }
};
*/
#include<bits/stdc++.h>
using namespace std;

// optimal NlogN time complexity and O(1) space complexity
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int times = n/3;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int count =1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                if(count>times){
                    ans.push_back(nums[i-1]);
                }
                count=1;
            }
        }
        if(count>times){
            ans.push_back(nums[n-1]);
        }
    return ans;
    }
};

//Unoptimized/Brute force solution using the map ds 
/*
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = nums.size();
        map<int,int> mpp;
        vector<int> more;
        for(int i=0;i<size;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second > size/3){
                more.push_back(it.first);
            },
        },
    return more;
    }
};
*/

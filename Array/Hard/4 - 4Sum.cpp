#include<bits/stdc++.h>
using namespace std;



//same approch as the 3Sum logic keeping i start from 1 and j just after i and then keeping track of all elements between the j and k and 
//then find out the the element that we want as fourth = target - sum (nums[i]+nums[j]+nums[k]) by that we can find the fourth element then 
//using set for O(1) if not find move k forward and store that current element in set.

/*
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n= nums.size();
        set<vector<int>> st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long long> hashset;
                for(int k=j+1;k<n;k++){
                    long long sum = (long long)nums[i]+nums[j]+nums[k];
                    long long fourth = target - sum;
                    if(hashset.find(fourth)!=hashset.end()){
                        vector<int> temp = {nums[i],nums[j],nums[k],int(fourth)};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            }
        }

        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};*/

---------------------------------------------------------------------------

/*  DUMB Approch but for git heatmap 🫡
 
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>> st;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        long long sum = nums[i]+nums[j];
                        sum+=nums[k];
                        sum+=nums[l];

                        if(sum==target){
                            vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                            sort(temp.begin(),temp.end());
                            st.insert(temp);
                        }
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};
*/
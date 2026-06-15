#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool canplace(vector<int>&arr,int cow , int dist){
        int cutcows = 1;
        int last = arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]-last >= dist){
                cutcows++;
                last = arr[i];
            }
        }
        if(cutcows >=cow) return true;
        return false;
    }

    int aggressiveCows(vector<int> &nums, int k) {
        int ans = 1;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int low = 1;
        int high = nums[n-1] - nums[0];

        while(low<=high){
            int mid = low + ((high-low)/2);
            if(canplace(nums,k,mid)){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    return ans;
    }
};
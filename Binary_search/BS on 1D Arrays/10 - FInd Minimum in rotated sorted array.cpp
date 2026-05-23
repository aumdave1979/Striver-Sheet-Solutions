#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int findMin(vector<int>& nums) {
        int low = 0;
        int n = nums.size();
        int high = n-1;
        int ans = INT32_MAX;

        while(low<=high){
            int mid = low + (high-low)/2;
            //check which side sorted
            if(nums[low]<=nums[mid]){
                //this is left side
                ans = min(ans,nums[low]); //checks which is minimum as in sorted the most left sided will be the minium and eliminate that half
                low = mid+1; //eliminating the  half
            }
            // right side is sorted 
            else{
                ans = min(ans,nums[mid]); //storing the most left side of that sorted array and compare and store in mini
                high = mid-1; // eliminating that half
            }
        }
    return ans;
    }
};
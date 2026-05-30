#include<bits/stdc++.h>
using namespace std;

// same as previous solution just find the minimum but just store the index of the mini element and then return it 
class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int low = 0;
        int n = nums.size();
        int high = n-1;
        int ans = INT32_MAX; 
        int idx=0;
        while(low<=high){
            int mid = low + (high-low)/2;
            //check which side sorted
            if(nums[low]<=nums[mid]){
                //this is left side
                if(nums[low]< ans){
                    idx = low;
                }
                ans = min(ans,nums[low]); //checks which is minimum as in sorted the most left sided will be the minium and eliminate that half
                low = mid+1; //eliminating the  half
            }
            // right side is sorted 
            else{
                if(nums[mid]<ans){
                    idx = mid;
                }
                ans = min(ans,nums[mid]); //storing the most left side of that sorted array and compare and store in mini
                high = mid-1; // eliminating that half
            }
        }
    return idx;
    }
};
#include<bits/stdc++.h>
using namespace std;

// Reccursive Approch
/*
class Solution {
public:
    int bs(vector<int> &nums, int low, int high, int target){
        if(low > high) return -1;
        int mid = low + (high - low) / 2;
        if(nums[mid] == target){
            return mid;
        }
        else if(target > nums[mid]){
            return bs(nums, mid + 1, high, target);
        }
        return bs(nums, low, mid - 1, target);
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return bs(nums, 0, n - 1, target);
    }
};
*/


// Just a normal Typical Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int n = nums.size();
        int high = n-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(target == nums[mid]) return mid;
            else if(target>nums[mid]){
                low = mid+1;
            }
            else if(target<nums[mid]){
                high = mid -1;
            }
        }
    return -1;
    }
};
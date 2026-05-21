#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        int floor = -1;
        int ceil = -1;
        int low = 0;
        int high = n - 1;

        // for floor
        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] <= x){
                floor = nums[mid];
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        low = 0;
        high = n - 1;

        // for ceil 
        while(low <= high){

            int mid = low + (high - low) / 2;

            if(nums[mid] >= x){
                ceil = nums[mid];
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return {floor, ceil};
    }
};
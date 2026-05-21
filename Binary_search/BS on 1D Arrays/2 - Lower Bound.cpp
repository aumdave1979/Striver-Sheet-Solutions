#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int ans = INT32_MAX;
        int low = 0;
        int n = nums.size();
        int high = n-1;

        while(low<=high){
            int mid = low + ((high - low)/2);

            if(nums[mid]>=x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        if(ans != INT32_MAX) return ans;
    return n;
    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool thresold(vector<int> &arr, int mid, int threshold) {
        int sum = 0;
        for(int i = 0; i < arr.size(); i++) {
            sum += ceil((double)arr[i] / mid);
        }
        return sum <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans = INT_MAX;
        int high = *max_element(nums.begin(), nums.end());
        int low = 1;
        while(low <= high) {
            int mid = low + ((high - low) / 2);
            if(thresold(nums, mid, threshold)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
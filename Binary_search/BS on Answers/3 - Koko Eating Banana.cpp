#include<bits/stdc++.h>
using namespace std;

// binary search ranging from 1 to n comparing least hour 

class Solution {
public:

    long long totalHours(vector<int>& arr, int hour){
        long long totalTime = 0;
        for(int i = 0; i < arr.size(); i++){
            totalTime += ceil((double)arr[i] / (double)hour);
        }
        return totalTime;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while(low <= high){

            int mid = low + (high - low) / 2;
            long long totalH = totalHours(piles, mid);

            if(totalH <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sum(vector<int>&arr){
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum+= arr[i];
        }
        return sum;
    }

    int numday(vector<int>&arr , int capacity){
        int day = 1;
        int load = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] + load > capacity){
                day++;
                load = arr[i];
            }
            else{
                load += arr[i];
            }
        }
        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int ans = INT32_MAX;    
        int low = *max_element(weights.begin(),weights.end());
        int high = sum(weights);

        while(low<=high){
            int mid = low + ((high-low)/2);
            int num_of_days = numday(weights,mid);
            if(num_of_days <= days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
    return low;
    }
};
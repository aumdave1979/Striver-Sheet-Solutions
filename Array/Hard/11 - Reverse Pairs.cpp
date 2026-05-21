#include<bits/stdc++.h>
using namespace std;


/* 3rd approch type casted to long long but leads to TIME LIMIT EXCEED
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if((long long)nums[i] > 2LL * nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};

*/


/* 2nd approch again leads to integer overflow and runtime error
Then though that maybe if i ignore the the numbers which are half of max int then will solve 
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               if(nums[j]<(INT32_MAX)/2){
                if(nums[i]>(2*nums[j])){
                    count++;
                }
               }
            }
        }
    return count;
    }
};

*/


/* 1st approch leads to runtime integer flow
most basic apporch regular one but leads to integer flow 
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>(2*nums[j])){
                    count++;
                }
            }
        }
    return count;
    }
};
*/
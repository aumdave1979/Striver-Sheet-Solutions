#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,0,2,3,0,4,0,1};
    int n = nums.size();
   int i = 0;
   int j = 0;
   while(j<n){
    if(nums[j]!=0){
        swap(nums[i],nums[j]);
        i++;
    }
    j++;
   }
   for(auto it: nums){
    cout << it << " ";
   }
} 
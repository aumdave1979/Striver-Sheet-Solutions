#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int end = nums.size()-1;
        int front=0;
        for(int i=0;i<=end;){
            if(nums[i]==2){
                swap(nums[i],nums[end]);
                end--;
            }
            else if(nums[i]==0){
                swap(nums[i],nums[front]);
                front++;
                i++;
            }
            else{
                i++;
            }
        }
    }
};
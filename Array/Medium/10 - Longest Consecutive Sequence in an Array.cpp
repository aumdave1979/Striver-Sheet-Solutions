#include<bits/stdc++.h>
using namespace std;

//optimized TC - O(n) S, SC - O(n)
/*
first loop for inserting into set 
iterate in set 
find if previous element exist move to next
if not then check further elements and increase the count
return the largest count
*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n = nums.size();
       if(n==0) return 0;
       int longest = 1;
        unordered_set<int> s;
        for(auto it:nums){
            s.insert(it);
        }

        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int count =1;
                int x = it;
                while(s.find(x+1) != s.end()){
                    x = x+1;
                    count+=1;
                }
                if(count>longest){
                    longest = count;
                }
            }
        }
       return longest; 
    }
};


//Brute force Approch TC - Nlogn , SC - O(1)
/*
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return 0;
        }
        int conti_size = 1;
            int size = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }

            if(nums[i]-nums[i-1]==1){
                size++;
                if(size>conti_size){
                    conti_size = size;
                }
            }
            else{
                size = 1;
            }
        }
    return conti_size;
    }
};
*/
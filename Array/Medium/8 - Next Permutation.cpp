#include<bits/stdc++.h>
using namespace std;


//Sol2 Optimal 
/*  
1. First find the number nearest which has at least one large element in its rightside 
2.then swap with it 
3. sort the rest remaining
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int large = nums[n - 1];
        int break_point = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < large) {
                break_point = i;
                break;
            } else {
                large = nums[i];
            }
        }
    if(break_point==-1){
        sort(nums.begin(),nums.end());
        return;
    }
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] > nums[break_point]) {
                swap(nums[i], nums[break_point]);
                sort(nums.begin() + break_point + 1, nums.end());
                break;
            }
        }
    }
};

//Sol1 A built in function not recommended for learning;

/*
class Solution {
 public:
     void nextPermutation(vector<int>& nums) {
         // a built in function not recommended>❌
         next_permutation(nums.begin(),nums.end());
     }
 };
 */
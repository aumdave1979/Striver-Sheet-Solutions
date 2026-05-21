#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int pos = 0;
        int neg = 1;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>0){
                ans[pos] = nums[i];
                pos +=2;
            }
            else{
                ans[neg] = nums[i];
                neg += 2;
            }
        }
    return ans;
    }
};



/*  MY APPROCH TLE;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int k=0;
        while(k<nums.size()){
            if(nums[0]>0){
                break;
            }else{
                k++;
                if(nums[k]>0){
                    swap(nums[k],nums[0]);
                    break;
                }
            }
        }
        bool flag = false;
        bool previous = true;
        int i=1;
        while(i<nums.size()){
            if(previous == true){
                flag = false;
            }
            if(previous == false){
                flag = true;
            }
            if(flag == false){
                if(nums[i]<0){
                    previous = false;
                    i++;
                }
                else{
                    int j = i+1;
                    while(j<nums.size()){
                        if(nums[j]>0){
                            j++;
                        }
                        else{
                            swap(nums[j],nums[nums[i]]);
                            break;
                        }
                    }
                    i++;
                    previous = false;
                }
            }
            if(flag == true){
                if(nums[i]>0){
                    previous = true;
                    i++;
                }
                else{
                    int j = i+1;
                    while(j<nums.size()){
                        if(nums[j]<0){
                            j++;
                        }
                        else{
                            swap(nums[j],nums[nums[i]]);
                            break;
                        }
                    }
                    i++;
                    previous = true;;
                }
            }
        }
    return nums;
    }
};
*/


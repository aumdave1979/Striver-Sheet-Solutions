#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {5,10,3};
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for(int i=0;i<nums.size();i++){
   
        if(nums[i]>largest){
            second_largest = largest;
            largest = nums[i];
        }
        else if(nums[i]>=second_largest && nums[i]<largest){
            second_largest = nums[i];
        }
    }
    cout << "second_largest: " << second_largest;

}
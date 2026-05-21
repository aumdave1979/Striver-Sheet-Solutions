#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {19,7,15,17,13};
    int largest = nums[0];

    for(int i=0;i<nums.size();i++){
        if(nums[i]>=largest){
            largest = nums[i];
        }
    }
    cout << "Largest: " << largest;
}
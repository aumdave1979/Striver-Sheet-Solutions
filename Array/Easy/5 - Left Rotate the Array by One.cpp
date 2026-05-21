#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,5,8,7,22,45};

    int temp = nums[0];
    for(int i=1;i<nums.size()-1;i++){
        nums[i-1] = nums[i];
    }
    nums[nums.size()-1] = temp;

    for(auto it:nums){
        cout << it << " ";
    }
}
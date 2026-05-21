#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 4;

    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            cout << "At index: " << i;
            break; 
        }
    }
    
}
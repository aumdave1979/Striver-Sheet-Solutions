#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,1,2,2,2,3,3};

    if(nums.size()==0) return 0;

    int i=0;
    int j=1;
    while(j<nums.size()){
        if(nums[i]!=nums[j]){
            i++;
            nums[i] = nums[j];
        }
    j++;    
    }
    int k = i+1;
    for(int x = 0;x<k;x++){
        cout << nums[x] << " ";
    }
}
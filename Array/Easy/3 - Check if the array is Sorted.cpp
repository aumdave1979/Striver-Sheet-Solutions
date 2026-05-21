#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,6};
    bool flag = true;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]<nums[i+1]){
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "Sorted :)";
    }
    else{
        cout << "Not Sorted :(";
    }

}
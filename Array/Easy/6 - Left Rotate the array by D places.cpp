#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {12,15,7,6,19};
    int rotate;
    cout << "How many time to rotate: ";
    cin >> rotate;
    rotate = rotate % nums.size();

    while(rotate>0){
        int temp = nums[0];
        for(int i=1;i<nums.size();i++){
            nums[i-1]=nums[i];
        }
        nums[nums.size()-1]=temp;
        rotate--;
    }

    for(auto it:nums){
        cout << it << " ";
    }
}
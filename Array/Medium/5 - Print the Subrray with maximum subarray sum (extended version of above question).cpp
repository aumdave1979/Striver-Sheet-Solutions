#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int> nums= {-2,-3,4,-1,-2,1,5,-3};
    int maxi = INT32_MIN;
    int sum =0;
    int ans_start,ans_end;
    int start = 0;
    for(int i =0;i<nums.size();i++){
        if(sum == 0){
             start = i;
        }
        sum+=  nums[i];
        if(sum >= maxi){
            maxi = sum;
            ans_start = start ;
            ans_end = i;
        }
        if(sum<0){
            sum = 0;
        }
    }
    cout << "Subarray: ";
    for(int i = ans_start;i<=ans_end;i++){
        cout << nums[i] << " " ;
    }
    cout << endl;
}
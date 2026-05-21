#include<bits/stdc++.h>
using namespace std;





//brute force time complexcity going almost O(n^3)
//generating all the subarrays;
/*
int main(){
    vector<int> nums= {1,1,1}; int k = 2;

    int count =0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int l=i;l<=j;l++){
                sum+=sum[k];
            }
        if(sum == k){
            count++;
        }
        }
    }
    return count;
}
*/
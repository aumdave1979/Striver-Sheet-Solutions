#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {0,2,4,1};
    int n = arr.size();
    int actual_sum = (n*(n+1))/2;
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int missing_num = actual_sum-sum;
    cout << "Missing number: " << missing_num;
}
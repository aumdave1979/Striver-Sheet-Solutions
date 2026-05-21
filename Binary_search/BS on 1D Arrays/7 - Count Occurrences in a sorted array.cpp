#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {
        // Your code goes here
        int a = lower_bound(arr.begin(),arr.end(),target) - arr.begin();
        int b = upper_bound(arr.begin(),arr.end(),target) - arr.begin() - 1 ;

        if(a == arr.size() || arr[a] != target){
            return 0;
        }
        return b-a+1;
    }
};
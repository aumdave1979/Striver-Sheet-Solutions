#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    long long power(int mid, int n){
        long long product = 1;
        for(int i=0;i<n;i++){
            product *= mid;
        }
        return product;
    }

    int NthRoot(int N, int M) {

        int low = 1;
        int high = M;

        while(low <= high){
            int mid = low + (high - low) / 2;
            long long val = power(mid, N);
            if(val == M){
                return mid;
            }
            else if(val < M){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return -1;
    }
};
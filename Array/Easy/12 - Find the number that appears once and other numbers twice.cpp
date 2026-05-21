#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer =0;
        for (int x:nums) {
            answer ^= x;
        }
        return answer;
    }
};  
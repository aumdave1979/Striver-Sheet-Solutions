#include<bits/stdc++.h>
using namespace std;

/*  this condition passes 17 test cases out of 93 all test case with ans -1
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int ans = 0;
        if((long long)m * k > bloomDay.size()){
        return -1;
        }
        return ans;
    }
};
*/

class Solution {
public:
    bool possible(vector<int>& arr, int day, int m, int k){
    int bouquet = 0;
    int count = 0;
    for(int i =0;i<arr.size();i++){
        if(arr[i] <= day){
            count++;
        }
        else{
            bouquet += (count / k);
            count = 0;
        }
    }

    bouquet += (count / k);
    if(bouquet >= m) return true;
    return false;
}

    int minDays(vector<int>& bloomDay, int m, int k) {
        //handles -1 cases;
        if((long long)m * k > bloomDay.size()){
        return -1;
        }
        int ans = INT32_MAX;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());

        while(low<=high){
            int mid = low + ((high-low)/2);

            if(possible(bloomDay,mid,m,k)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
    return ans;
    }
};


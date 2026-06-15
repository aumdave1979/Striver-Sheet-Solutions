#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int sum(vector<int> arr){
        int sum = 0;

        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
        }

        return sum;
    }

    int no_stud(vector<int> &arr , int maxpg){

        int student = 1;
        int pagesStudent = 0;

        for(int i = 0; i < arr.size(); i++){

            if(pagesStudent + arr[i] <= maxpg){
                pagesStudent += arr[i];
            }
            else{
                student++;
                pagesStudent = arr[i];
            }
        }

        return student;
    }

    int findPages(vector<int> &nums, int m){
        int n = nums.size();
        if(n < m){
            return -1;
        }
        int low = *max_element(nums.begin(), nums.end());
        int high = sum(nums);

        int ans = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int students = no_stud(nums, mid);

            if(students <= m){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,1,0,1,1,1};
    int max = 0;
    int repeat =0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            repeat++;
            if(repeat>=max){
                max = repeat;
            }
        }
        else{
            repeat=0;
        }
    }
    cout << "The maximum onces are: " << max;
}
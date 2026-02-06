#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    vector<int>nums(n);
    for(int i= 0;i<n;i++){
        cin >> nums[i];
    }
    map<int , int>mpp;
    for(int i = 0;i<n;i++){
        mpp[nums[i]]++;
    }
    int count = 1;
    int max_freq=1;
    for(auto x : mpp){
        if(x.second > 1){
            max_freq=x.second;
        }
    }
    cout << max_freq << endl ;

}
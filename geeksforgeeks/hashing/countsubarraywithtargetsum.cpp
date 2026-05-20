#include<bits/stdc++.h>
using namespace std ;

class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        int n = arr.size();
        int prefsum =0;
        int count  =0 ;
        map<int ,int>mpp;
        mpp[0]=1;
        for(int i =0 ;i<n ;i++){
            prefsum+=arr[i];
            int needed= prefsum-tar;
            if(mpp.find(needed)!=mpp.end()){
                count+=mpp[needed];
            }else{
                mpp[prefsum]++;
            }
        }
        return count  ;
    }
};


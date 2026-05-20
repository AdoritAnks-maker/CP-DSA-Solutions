#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubarrayDivK(vector<int>& arr, int k) {
        long long n = arr.size() ;
        long long  prefsum=0;
        unordered_map<long long ,long long > mpp;
        mpp[0]=-1; // prefix sum 0 at index -1
        long long  mx_lentt =0;
        for(int i  =0 ;i<n ;i++){
            prefsum+=arr[i];
            
            long long  mod = ((prefsum % k)+k)%k; // handle negative numbers
            if(mpp.find(mod)!=mpp.end()){
                mx_lentt=max(mx_lentt , i-mpp[mod]);
            }else{
                mpp[mod]=i; // store first occurrence
            }
        }
        return mx_lentt ;
    }
};
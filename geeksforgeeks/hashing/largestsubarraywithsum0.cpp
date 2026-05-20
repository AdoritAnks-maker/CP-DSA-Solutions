#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxLength(vector<int>& arr) {
        long long  n = arr.size();
        int  prefsum = 0 ;
        map<int , int>mpp;
        mpp[0]=-1;
        int mx_lentt =0;
        for(int i = 0 ;i<n;i++){
            prefsum+=arr[i];
            
            if(mpp.find(prefsum)!=mpp.end()){
                mx_lentt=max(mx_lentt , i-mpp[prefsum]);
            }else{
                mpp[prefsum]=i;
            }
        }
        return mx_lentt ;
    }
};
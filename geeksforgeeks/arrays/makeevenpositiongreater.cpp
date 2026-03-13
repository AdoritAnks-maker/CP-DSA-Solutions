#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n  = arr.size();
        sort(arr.begin() , arr.end());
        vector<int>ans(n);
        int left =0 ;
        int right = n-1;
        for(int i =0 ;i<n ;i++){
            if((i+1)%2==0){
                ans[i]=arr[right--];
            }else{
                ans[i]=arr[left++];
            }
        }
        return ans ;
    }
};
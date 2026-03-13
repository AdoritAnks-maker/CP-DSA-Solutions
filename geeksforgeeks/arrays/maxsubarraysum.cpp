#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int currsum=arr[0];
        int max_sum=arr[0];
        int n = arr.size();
        for(int i = 1 ;i< n; i++){
            currsum=max(arr[i] , currsum+arr[i]);
            max_sum=max(max_sum , currsum);
        }
        return max_sum;
    }
    
};
    
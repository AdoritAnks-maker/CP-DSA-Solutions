#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        int n= arr.size();
        int sum =0 ;
        for(int i  =0 ;i<n ;i++){
            int temp =0;
            for(int j = i ;j<n ;j++){
                temp+=arr[j];
                sum+=temp;
            }
        }
        return sum ;
    }
};

class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        int n= arr.size();
        int sum = 0;
        for(int i =0;i<n ;i++){
            sum+=arr[i]*(i+1)*(n-i);
        }
        return sum;
    }
};
#include<bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairs(vector<int>& arr, int k) {
        int count= 0;
        for(int i = 0;i<arr.size();i++){
            for(int j = i+1;j<arr.size();j++){
                if(abs(arr[j]-arr[i])==k){
                    count++;
                }
            }
        }
        return count;
    }
};
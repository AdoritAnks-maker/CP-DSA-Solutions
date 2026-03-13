#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        vector<int>temp;
        for(int i  =0 ;i< arr.size() ;i++){
            if(arr[i]!=0){
                temp.push_back(arr[i]);
            }
        }
        while(temp.size()!=n){
            temp.emplace_back(0);
        }
        for(int i  =0 ;i<n ;i++){
            arr[i]=temp[i];
        }
    }
};
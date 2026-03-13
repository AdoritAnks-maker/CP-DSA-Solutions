#include<bits/stdc++.h>
using namespace std;
class Solution {
   
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int>temp;
        temp.push_back(arr[n-1]);
        int max_so_far=arr[n-1];
        
        for(int i = n-2 ;i>=0 ;i--){
            if(arr[i]>=max_so_far){
                temp.push_back(arr[i]);
                max_so_far=arr[i];
            }
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};
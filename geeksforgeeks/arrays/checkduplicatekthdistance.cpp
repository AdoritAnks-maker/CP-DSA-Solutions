#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
       int  n = arr.size();
       for(int i  =0 ;i< n; i++){
           for(int j = 1 ; (i+j)< n && j<=k ; j++){
               int x = i+j ;
               
               if(arr[i]==arr[x]){
                   return true;
               }
           }
       }
       return false;
    }
};
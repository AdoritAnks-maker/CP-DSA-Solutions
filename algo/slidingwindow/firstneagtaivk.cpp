#include<bits/stdc++.h>
using namespace std ;

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
       vector<int>res;
       deque<int>dq;
       int i = 0;
       int j = 0;
       while(j < arr.size()){
           if(arr[j]<0){
               dq.push_back(arr[j]);
           }if(j-i+1<k){
               j++;
           }else if(j-i+1==k){
               if(dq.empty()){
                   res.push_back(0);
               }else{
                   res.push_back(dq.front());
               }
               if(arr[i]==dq.front()){
                   dq.pop_front();
               }
               i++;
               j++;
           }
       }
       return res;
    }
};
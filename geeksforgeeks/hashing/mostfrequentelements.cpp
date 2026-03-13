#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        map<int ,int>mpp;
        for(auto w : arr){
            mpp[w]++;
        }
        int maxi=0;
        int frequent_element=0;
        for(auto &p : mpp){
            maxi=max(maxi , p.second);
        }
        for(auto &x : mpp){
            if(x.second >= maxi){
                frequent_element=x.first;
            }
        }
        return frequent_element ;
    }
};
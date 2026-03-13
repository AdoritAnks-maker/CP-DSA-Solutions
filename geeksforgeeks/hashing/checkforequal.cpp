#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        if(a.size()!=b.size())return false;
        map<int , int>freq;
        for(auto x : a){
            freq[x]++;
        }
        for(auto z : b){
            freq[z]--;
        }
        for(auto v : freq){
            if(v.second!=0)return false;
        }
        return true;
    }
};
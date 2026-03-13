#include<bits/stdc++.h>
using namespace std;

// User function Template for C++
class Solution {
  public:
    bool areDisjoint(vector<int> &a, vector<int> &b) {
        set<int>st;
        for(auto x : a){
            st.insert(x);
        }
        for(auto z:b){
            if(st.find(z)!=st.end()){
                return false;
            }
        }
        return true;
    }
};
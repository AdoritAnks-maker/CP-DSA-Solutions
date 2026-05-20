#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void solve(string s ,string op , set<string>&ans){
        if(s.size()==0){
            ans.insert(op);
            return;
        }
        for(int i  = 0;i<s.size();i++){
            string op1=op;
            string s1=s;
            
            op1.push_back(s1[i]);
            s1.erase(s1.begin()+i);
            solve(s1,op1,ans);
        }
    }
    vector<string> findPermutation(string &s) {
        string op ="";
        set<string>st;
        solve(s,op,st);
        vector<string>ans(st.begin() ,st.end());
        return ans;
    }
};







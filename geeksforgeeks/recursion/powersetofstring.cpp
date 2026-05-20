#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void solve(string s , string op , vector<string>&ans){
        if(s.size()==0){
            ans.push_back(op);
            return  ;
        }
        string op1 = op;
        string op2= op;
        op2.push_back(s[0]);
        s.erase(s.begin());
        solve(s,op1 ,ans);
        solve(s, op2 , ans);
    }
    vector<string> powerSet(string s) {
        string op = "";
        vector<string>res;
        solve(s , op, res);
        return  res;
    }
};

#include<bits/stdC++.h>
using namespace std;

class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
       unordered_set<int>st(a.begin() , a.end());
       vector<int>res;
       for(int i =0;i<b.size();i++){
           if(st.find(b[i])!=st.end()){
               res.push_back(b[i]);
               st.erase(b[i]);
           }
       }
       return res;
    }
};
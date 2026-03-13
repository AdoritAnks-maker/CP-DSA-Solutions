#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int>st(a.begin() , a.end());
        for(int i = 0;i<b.size();i++){
            st.insert(b[i]);
        }
        vector<int>res(st.begin() , st.end());
        return res;
    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        int n = s.size();
        vector<int>v;
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        int mid = n/2 ;
        v.erase(v.begin()+mid);
        for(int i = v.size()-1;i>=0;i--){
            s.push(v[i]);
        }
    }
};
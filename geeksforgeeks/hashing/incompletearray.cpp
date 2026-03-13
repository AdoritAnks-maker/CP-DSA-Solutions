#include<bits/stdc++.h>
using namespace std;


// User function template for C++

class Solution {
  public:
    int countElements(vector<int> &arr) {
        set<int>st(arr.begin() , arr.end());
        vector<int>v(st.begin() , st.end());
        int mn=*min_element(arr.begin() , arr.end());
        int mx=*max_element(arr.begin() , arr.end());
        return (mx-mn+1)-v.size();
    }
};
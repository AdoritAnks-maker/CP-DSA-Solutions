#include<bits/stdc++.h>
using namespace std;

// User function Template for C++
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        stack<string>st;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            if(!st.empty() && st.top()==arr[i]){
                while(!st.empty() && st.top()==arr[i]){
                    st.pop();
                }
            }else{
                st.push(arr[i]);
            }
        }
        return st.size();
    }
};
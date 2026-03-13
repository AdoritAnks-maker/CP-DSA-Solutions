#include<bits/stdc++.H>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<int> ans(n);
        for(int i  = 2*n-1 ;i>=0 ;i--){
            int idx = i% n;
            while(!st.empty() && st.top()<=nums[idx]){
                st.pop();
            }
            if(!st.empty()){
                ans[idx]=st.top();
            }else{
                ans[idx]=-1;
            }
            st.push(nums[idx]);
        }
        return ans ;
    }
};
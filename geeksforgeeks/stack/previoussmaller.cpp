#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        stack<int>st;
        vector<int>res;
        for(int i =0 ;i<arr.size();i++){
            if(st.empty()){
                res.push_back(-1);
            }else if(!st.empty() && st.top()<arr[i]){
                res.push_back(st.top());
            }else if(!st.empty() && st.top()>=arr[i]){
                while(!st.empty() && st.top()>=arr[i]){
                    st.pop();
                }if(st.empty()){
                    res.push_back(-1);
                }else{
                    res.push_back(st.top());
                }
            }
            st.push(arr[i]);
        }
        return res;
    }
};
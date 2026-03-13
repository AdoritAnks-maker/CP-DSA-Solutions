#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int longest(vector<int>& arr) {
        stack<int>st;
        vector<int>res;
        int count = 0;
        for(int i =0;i<arr.size();i++){
            if(st.empty()){
            count++;
            }else if(!st.empty() && st.top()<=arr[i]){
                while(!st.empty() && st.top()<=arr[i]){
                    st.pop();
                }if(st.empty()){
                    count++;
                }
            }
            st.push(arr[i]);
        }
        return count ;
    }
};
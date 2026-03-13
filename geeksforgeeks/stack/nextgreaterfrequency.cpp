#include<bits/stdC++.h>
using namespace std;

class Solution {
  public:
    vector<int> nextFreqGreater(vector<int>& arr) {
        stack<int>st;
        int n = arr.size();
        map<int,int>freq;
        for(auto x : arr){
            freq[x]++;
        }
        vector<int>ans ;
        for(int i = n-1 ;i>= 0 ;i--){
            if(st.empty()){
               ans.push_back(-1) ;
            }else if(!st.empty() && freq[st.top()]>freq[arr[i]]){
                ans.push_back(st.top());
            }else if(!st.empty() && freq[st.top()]<=freq[arr[i]]){
                while(!st.empty() && freq[st.top()]<=freq[arr[i]]){
                    st.pop();
                }if(st.empty()){
                    ans.push_back(-1);
                }else{
                    ans.push_back(st.top());
                }
            }
            st.push(arr[i]);
        }
        reverse(ans.begin() , ans.end());
        return ans ;
    }
};

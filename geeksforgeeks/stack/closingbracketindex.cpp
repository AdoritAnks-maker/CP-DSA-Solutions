#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int closing(string s, int pos)
    {
        stack<int>st ;
        int n = s.size();
        int closing_idx =-1;
        for(int i =0 ;i<n ;i++){
            if(s[i]=='['){
                st.push(i);
            }else if(s[i]==']'){
                if(st.empty())continue;
                int open_idx = st.top();
                st.pop();
                if(open_idx==pos){
                    closing_idx=i;
                }
            }
        }
        return closing_idx ;
    }
};
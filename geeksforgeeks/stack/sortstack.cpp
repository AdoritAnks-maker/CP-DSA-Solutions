#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void sortStack(stack<int> &st) {
        vector<int>temp;
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        sort(temp.begin() , temp.end());
        for(int i = 0;i<temp.size() ;i++){
            st.push(temp[i]);
        }
    }
};

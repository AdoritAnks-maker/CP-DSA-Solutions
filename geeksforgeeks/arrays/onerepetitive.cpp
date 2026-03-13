#include<bits/stdc++.h>
using namespace std;

// User function Template for C++
class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        map<int ,int>freq;
        for(int i = 0;i< arr.size() ;i++){
            freq[arr[i]]++;
        }
        int elm =-1;
        for(auto x : freq){
            if(x.second==2){
                elm=x.first;
            }
        }
        return elm;
    }
};
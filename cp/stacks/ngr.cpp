#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        stack<int>s;
        vector<int>nums;
        for(int i = n-1 ;i>=0;i--){
            if(s.size()==0){
                nums.push_back(-1);
            }else if(s.size()>0 && s.top()>arr[i]){
                nums.push_back(s.top());
            }else if(s.size()>0 && s.top()<=arr[i]){
                while(s.size()>0 && s.top()<=arr[i]){
                    s.pop();
                }if(s.size()==0){
                    nums.push_back(-1);
                }else{
                    nums.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        reverse(nums.begin() , nums.end());
        return nums;
    }
};
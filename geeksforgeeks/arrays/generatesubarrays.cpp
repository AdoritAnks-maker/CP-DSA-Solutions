#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> getSubArrays(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> ans;

        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                vector<int> sub;
                for(int k = i; k <= j; k++){
                    sub.push_back(arr[k]);
                }
                ans.push_back(sub);
            }
        }
        return ans;
    }
};
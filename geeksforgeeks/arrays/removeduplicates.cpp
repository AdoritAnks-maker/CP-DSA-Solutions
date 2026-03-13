#include<bits/stdc++.h>
using namespace std;



class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        set<int>nums;
        for(int i = 0; i<arr.size();i++){
            nums.insert(arr[i]);
        }
        vector<int>result(nums.begin(),nums.end());
        return result ;
    }
};
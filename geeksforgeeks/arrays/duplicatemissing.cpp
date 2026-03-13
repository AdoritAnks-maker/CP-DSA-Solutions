#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        map<int , int>mp;
        for(int i = 0 ; i< n;i++){
            mp[arr[i]]++;
        }
        vector<int>ans;
        int duplicate =-1;
        int missing  =-1;
        for(int i =1 ;i<=n ;i++){
            if(mp[i]==2){
                duplicate=i;
            }else if(mp[i]==0){
                missing =i;
            }
        }
        ans.push_back(duplicate);
        ans.push_back(missing);
        return ans ;
    }
};
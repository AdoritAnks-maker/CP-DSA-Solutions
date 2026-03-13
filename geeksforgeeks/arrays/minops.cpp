#include<bits/stdc++.H>
using namespace std;
class Solution {
  public:

    int minOps(vector<int> arr, int k) {
        int n =arr.size();
        int mx=*max_element(arr.begin() , arr.end());
        vector<int>ops;
        for(int i = 0;i<n ;i++){
            ops.push_back(mx-arr[i]);
        }
        int oper=0;
        for(int i = 0; i<ops.size() ;i++){
            if(ops[i]%k==0){
                oper+=(ops[i]/ k);
            }else if (ops[i]%k!=0){
                return -1;
            }
        }
        return oper ;
    }
};
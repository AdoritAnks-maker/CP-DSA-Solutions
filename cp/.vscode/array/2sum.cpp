#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int>twosum(vector<int>&nums, int target){
            int n = nums.size();
            for(int i = 0;i<n ;i++){
                for(int j=i+1;j<n;j++){
                    if(nums[j]==target-nums[i])
                    return {i,j};
                }
            }
            return { };
        }
};

int main(){
    int t;
    cin >> t;
    vector<int>arr={2,7,11,15};
    Solution s;
    vector<int>result= s.twosum(arr, t);
    for(auto x : result){
        cout << x << " ";
    }
    cout << endl;
}
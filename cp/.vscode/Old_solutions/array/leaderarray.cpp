#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> leaderarray(vector<int>& nums){
        int n = nums.size();
        vector<int> temp;

        int leaderelement = nums[n-1];
        temp.push_back(leaderelement);   // last element is leader

        for(int i = n-2; i >= 0; i--){
            if(nums[i] > leaderelement){
                leaderelement = nums[i];
                temp.push_back(nums[i]);
            }
        }

        reverse(temp.begin(), temp.end()); 
        return temp;
    } 
};

int main(){
    Solution sol;
    vector<int> arr = {16,17,4,3,5,2};

    vector<int> ans = sol.leaderarray(arr);

    for(auto x : ans){
        cout << x << " ";
    }
}

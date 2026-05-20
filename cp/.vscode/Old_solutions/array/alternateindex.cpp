#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int>leaderarray(vector<int>&nums){
            int n = nums.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                bool leader=true;
                for(int j =i+1;j<n;j++){
                    if(nums[j]>=nums[i]){
                        leader=false;
                        break;
                    }
                }
                if(leader){
                    temp.push_back(nums[i]);
                }
            }
            return temp;
        }
};

int main(){
    vector<int>arr={10,22,12,3,0,6};;
    Solution sol;
    
    vector<int>result=sol.leaderarray(arr);
    for(auto x : result){
        cout << x << " ";
    }
    cout << endl;
}
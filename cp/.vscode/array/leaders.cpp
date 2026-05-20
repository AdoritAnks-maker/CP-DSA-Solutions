#include<bits/stdc++.h>
using namespace std ;

class Solution{
    public:
        vector<int>leadersarraye(vector<int>&nums){
            int n = nums.size();
            vector<int>temp={nums[n-1]};
            for(int i=n-2;i>=0;i--){
                for(int j=i-1;i>=0;i--){
                    if(nums[j]>nums[i]){
                        temp.push_back(nums[i]);
                    }
                    else{
                        break;
                    }
                }
            }
            return temp;
        }
};

int main(){
    vector<int>arr={4,7,1,0};
    Solution sol ;
    vector<int>result=sol.leadersarraye(arr);
    for(auto x : result){
        cout << x << " ";
    }
    cout << endl;
}
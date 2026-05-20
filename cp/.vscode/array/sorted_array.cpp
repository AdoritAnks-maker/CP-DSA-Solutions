#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool check(vector<int>&nums){
    int n = nums.size();
    int cnt=0;
    for(int i = 0; i< n-1 ;i++){
        if(nums[i]>nums[i+1]%n){
            cnt++;
        }
    }
    return cnt<=1 ;
    }
};

int main(){
    vector<int>arr={1,2,4,3,9,5,6,79,3,2};
    Solution s;
    cout << s.check(arr);
}
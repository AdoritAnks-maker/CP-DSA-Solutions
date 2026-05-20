#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int removeduplicates(vector<int>&nums){
    int n = nums.size();
    int cnt =1;
    for(int i = 1; i<n ;i++){
        if(nums[i]!=nums[i-1]){
            nums[cnt]=nums[i];
            cnt++;
        }
    }
    return cnt;
    }
};

int main(){
    vector<int>arr={1,1,2,2,3,3,4,5,6};
    Solution s;
    cout << s.removeduplicates(arr);
}
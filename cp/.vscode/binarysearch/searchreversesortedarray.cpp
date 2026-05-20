#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int getarray(vector<int>&nums , int target){
            int start = 0 ;
            int end=nums.size()-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target)return mid;
                else if(target<nums[mid])start=mid+1;
                else end=mid-1;
            }
            return -1;
        }
};
int main(){
    int target;
    cin >> target;
    vector<int>arr={20,17,15,14,13,12,10,9,8,4};
    Solution sol;
    cout << sol.getarray(arr,target);
}
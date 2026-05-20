#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int getelement(vector<int>&nums , int target){
            int start = 0;
            int end= 1;
            while(target>nums[end]){
                start=end;
                end=end*2;
            }
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target)return mid;
                else if(nums[mid]<target){
                    start=mid+1;
                }else{
                end=mid-1;
                }
            }
            return -1;
        }
};
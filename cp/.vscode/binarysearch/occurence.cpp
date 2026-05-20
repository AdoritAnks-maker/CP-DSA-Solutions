#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int occurence(vector<int>&nums , int target){
            int start=0;
            int end=nums.size()-1;
            int result=-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target){
                    result=mid;
                    end=mid-1;
                }else if(nums[mid]<target){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
            return result ;
        }
};
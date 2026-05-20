#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int divisorfunc(vector<int>&nums , int digit){
            int total_sums=0;
            for(auto x : nums){
                total_sums+=(x+digit-1)/digit;
            }
            return total_sums;
        }

        int minimumdivisor(vector<int>&nums, int threshold){
            int start=1;
            int end=*max_element(nums.begin() , nums.end());
            while(start<=end){
                int mid=start+(end-start)/2;
                if(divisorfunc(nums, mid)<=threshold){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }
            return start;
        }
};
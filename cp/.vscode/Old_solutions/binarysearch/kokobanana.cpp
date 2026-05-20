#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int eatingbanana(vector<int>&nums ,int h){
            for(int i = 1;i<=nums.size() ;i++){
                int total_hours=0;
                if(nums[i-1]> i  ){
                    total_hours+=(nums[i-1]+i-1)/i;

                    if(total_hours>h){
                        continue;
                    }
                    if(total_hours<=h && )
                }
            }
        }
};
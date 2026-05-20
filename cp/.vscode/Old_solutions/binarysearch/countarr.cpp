#include<bits/stdc++.h>
using namespace std ;

class Solution{
    public:
        int first_occurence(vector<int>&nums , int target){
            int start=0;
            int first=-1;
            int last=-1;
            int end=nums.size()-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target){
                    first=mid;
                    end=mid-1;
                }
                else if(target > nums[mid])start=mid+1;
                else end=mid-1;
            }
            return first;
        }

        int secondoccurence(vector<int>&nums , int target){
             int start=0;
            int first=-1;
            int last=-1;
            int end=nums.size()-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target){
                    last=mid;
                    start=mid+1;
                }
                else if(target > nums[mid])start=mid+1;
                else end=mid-1;
            }
            return last;
        }

        int countoccurence(vector<int>&nums , int target){
                int first=first_occurence(nums , target);
                if(first==-1)return 0;
                int last=secondoccurence(nums, target);

            return last-first +1 ;
        }
};

int main(){
    int target ;
    cin >> target;
    vector<int>arr={2,4,10,10,10,14,20};
    Solution sol ;
    cout <<  sol.countoccurence(arr , target);
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int floorval(vector<int>&nums , int target){
            int start =  0;
            int n = nums.size()-1;
            int end = n-1;
            int result=-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target)return nums[mid] ;
                else if(nums[mid]<target){
                    result=nums[mid];
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
            return result;
        }
        int ceilval(vector<int>&nums , int target){
            int start=0;
            int end=nums.size()-1;
            int result=-1;
            while(start<=end){
                int mid = start+(end-start)/2;
                if(nums[mid]==target)return nums[mid];
                else if(nums[mid]>target){
                    result=nums[mid];
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }
            return result;
        }
};

int main(){
    int target ;
    cin >> target ;
    vector<int>arr={1,2,4,6,10};
    Solution sol;
    int result=sol.floorval(arr , target);
    int fin=sol.ceilval(arr, target);
    cout << result << endl;
    cout << fin << endl ;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int targetrotatedd(vector<int>&nums  , int target){
        int start=0;
        int end=nums.size()-1;
        int n = nums.size();
        int ans = -1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[start]<=nums[mid]){
                if(nums[start]<=target && target < nums[mid]){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }else{
                if(nums[mid]<target && target<=nums[end] ){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};

int main(){
    int target ;
    cin >> target ;
    vector<int>arr={11,12,15,18,2,5,6,8};
    Solution sol;
    int result = sol.targetrotatedd(arr, target);
    cout << result << endl ;
}

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int arraysorted(vector<int>&nums){
            int start=0;
            int end = nums.size()-1;
            int n = nums.size();
            while(start<=end){
                if(nums[start]<nums[end]){
                    return start ;
                }
                int mid=start+(end-start)/2;
                int prev = (mid+n-1)%n;
                int next=(mid+1)%n;
                if(nums[mid]<=nums[next] && nums[mid]<=nums[prev]){
                    return mid;

                }else if(nums[start]<nums[mid]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            return 0 ;
        }
};

int main(){
    vector<int>arr={11,12,15,18,2,5,6,8};
    Solution sol;
    int result = sol.arraysorted(arr);
    cout << result << endl;
}
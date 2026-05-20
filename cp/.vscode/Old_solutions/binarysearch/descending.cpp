#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int gettarget(vector<int>&nums , int target){
            int start=0;
            int end = nums.size()-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target)return mid;
                else if(nums[mid]>target)end=mid-1;
                else start=mid+1;
            }
            return -1;
        }

};

int main(){
    int target ;
    cin >> target;
    vector<int>arr={10,9,8,7,6,5,4,3,2,1};
    Solution sol ;
    int result =sol.gettarget(arr , target);
    cout << result << endl ;
}
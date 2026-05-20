#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int firstoccur(vector<int>&nums , int target){
            int start=0;
            int end=nums.size()-1;
            int ans = -1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target){
                    ans = mid ;
                    end = mid-1;
                }else if(nums[mid]<target){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
            return ans  ;
        }
};

int main(){
    int target;
    cin >> target;
    Solution sol;
    vector<int>arr={1,2,3,4,5,6,7,8,9,10,13,23,23,45};
    int result = sol.firstoccur(arr, target);
    cout << result << endl ;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int firstoccur(vector<int>&nums , int target){
            int start=0;
            int end = 1 ;
            while(target>nums[end]){
                start=end;
                end=end*2;
            }
            int ans = -1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target){
                    ans=mid;
                    end=mid-1;
                }else if(nums[mid]<target){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
            return ans ;

        }
};

int main(){
    vector<int>arr={0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1};
    Solution sol;
    int result = sol.firstoccur(arr, 1);
    cout << result << endl;
}
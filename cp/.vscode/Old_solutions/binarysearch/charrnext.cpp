#include<bits/stdc++.h>
using namespace std ;

class Solution{
    public:
        int nextchar(vector<char>& nums, char target){
            int n = nums.size();
            int start=0;
            int end = n-1;
            int result=-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target){
                    start=mid+1;
                }
                else if(nums[mid]>target){
                    result=nums[mid];
                    end=end-1;
                }else{
                    start=mid+1;
                }
            }
            return result; 
        }
        int prevchar(vector<char>&nums, char target){
            int start=0;
            int end = nums.size()-1;
            int n = nums.size();
            char result=0;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target){
                    end=mid-1;
                }
                else if(nums[mid]<target){
                    result=nums[mid];
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
            return result  ;
        }
};

int main(){
    char target ;
    cin >> target;
    Solution sol;
    vector<char>arr={'a','b','c','d','f','g'};
    char fin=sol.nextchar(arr, target);
    char ds=sol.prevchar(arr, target);
    cout << fin << endl ;
    cout << ds << endl;
}
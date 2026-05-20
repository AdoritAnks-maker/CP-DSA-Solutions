// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int floorval(vector<int>&nums , int target){
//             int start=0;
//             int end = nums.size()-1;
//             int n = nums.size();
//             int result =-1;
//             while(start<=end){          // key is not present in the array  and if key would be there then we have to return the same element as key thet vould be mimimum difference
//                 int mid = start+(end-start)/2;
//                 if(nums[mid]==target){
//                     result=nums[mid];
//                 }else if(nums[mid]<target){
//                     result=nums[mid];
//                     start=mid+1;
//                 }else{
//                     end = mid -1;
//                 }
//             }
//             return result ;
//         }
//         int ceilnum(vector<int>&nums , int target){
//             int start=0;
//             int end = nums.size()-1;
//             int n = nums.size();
//             int result=-1 ;
//             while(start<=end){
//                 int mid=start+(end-start)/2;
//                 if(nums[mid]==target){
//                     result=nums[mid];
//                 }else if(nums[mid]>target){
//                     result = nums[mid];
//                     end=mid-1;
//                 }else{
//                     start=mid+1;
//                 }
//             }
//             return result;
//         }
//         int tocountdiff(vector<int>&nums , int target){
//             int first = floorval(nums , target);
//             if(first==-1)return 0 ;
//             int last=ceilnum(nums , target);
//             int first_result=abs(target-first);
//             int second_result=abs(target-last);
//             if(first_result < second_result){
//                 return first ;
//             }
//             return last;
//         }
// };

// int main(){
//     vector<int>arr={1,3,8,10,15};
//     Solution sol;
//     int ankush= sol.tocountdiff(arr, 12);
//     cout << ankush << endl ;
// }

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int getmindiff(vector<int>&nums , int target){
            int start=0;
            int n = nums.size();
            int end = n-1;
            int result=-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]==target){
                    return mid;
                }else if(nums[mid]<start){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
};
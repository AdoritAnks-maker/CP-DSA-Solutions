// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int index=-1;
//         for(int i =0;i<nums.size();i++){
//             if(nums[i]==target){
//                 index=i;
//             }
//         }
//         return index;            // LINEAR SEARCH IN THE ARRAY 
//     }
// };

// int main(){
//     int k;
//     cin >> k;
//     vector<int>arr={-1,0,3,5,9,12};
//     Solution sol;
//     cout << sol.search(arr , k);
// }

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int search(vector<int>&nums , int target){
            int low = 0;
            int high=nums.size()-1;
            int ans  = high;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target)return mid;
                else if(target>nums[mid])low=mid+1;
                else{
                    high=mid-1;
                }
            }
            return -1;
        }
};

int main(){
    
}
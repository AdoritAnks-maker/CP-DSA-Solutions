// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n ;
//     cin >> n ;
//     vector<int>arr(n);
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }
//     int x ;
//     cin >> x ;
//     int index=-1;
//     for(int i = 0;i<n ;i++){
//         if(arr[i]>=x){
//             index=i;         // brute force approach 
//             break;
//         }
//     }
//     cout << index << endl;


// }



// optimal approach

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int lowerbound(vector<int>&nums, int n , int x){
            int low=0;
            int high=n-1;
            int ans = n;
            while(low<=high){
                int mid=(low+high)/2;

                if(nums[mid]>=x){
                    ans=mid;
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
            return ans ;

        }
};
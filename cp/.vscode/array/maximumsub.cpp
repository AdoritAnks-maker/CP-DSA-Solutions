// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // class Solution{
// // //     public:
// // //         int maxsubarray(vector<int>&nums){
// // //             int sum=0;
// // //             int maximum_sum=INT_MIN;
// // //             for(int i=0;i<nums.size();i++){
// // //                 for(int j=0;j<nums.size();j++){
// // //                     for(int k=i ; k<=j ;k++){
// // //                         sum+=nums[k];
// // //                     }
// // //                     maximum_sum=max(maximum_sum,sum);
// // //                 }
// // //             }
// // //             return maximum_sum;
// // //         }
// // // };

// // // int main(){
// // //     vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
// // //     Solution sol;
// // //     int maxi=sol.maxsubarray(arr);

// // //     cout << maxi << endl ;

// // // }

// // // better approach

// // #include<bits/stdc++.h>
// // using namespace std;

// // class Solution{
// //     public:
// //         int maxsubarray(vector<int>&nums){
// //             int maxi=INT_MIN;
// //             int sum=0;
// //             int n = nums.size();
// //             for(int i=0;i<n;i++){
// //                 for(int j=i;j<n;j++){
// //                     sum+=nums[j];
// //                     maxi=max(maxi,sum);
// //                 }
// //             }
// //             return maxi;
// //         }
// // };

// // int main(){
// //     vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
// //     Solution sol;
// //     int maxi=sol.maxsubarray(arr);

// //     cout << maxi << endl ;

// // }


// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Function to find maximum sum of subarrays
//     int maxSubArray(vector<int>& nums) {
        
//         /* Initialize maximum sum with
//         the smallest possible integer*/
//         int maxi = INT_MIN; 

//         // Iterate over each starting index of subarrays
//         for (int i = 0; i < nums.size(); i++) {
            
//             /* Variable to store the sum
//             of the current subarray*/
//             int sum = 0; 
            
//             /* Iterate over each ending index
//             of subarrays starting from i*/
//             for (int j = i; j < nums.size(); j++) {
                
//                 /* Add the current element nums[j] to
//                 the sum i.e. sum of nums[i...j-1]*/
//                 sum += nums[j];

//                 /* Update maxi with the maximum of its current
//                 value and the sum of the current subarray*/
//                 maxi = max(maxi, sum);
//             }
//         }

//         // Return the maximum subarray sum found
//         return maxi;
//     }
// };

// int main() {
//     vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

//     // Create an instance of Solution class
//     Solution sol;

//     int maxSum = sol.maxSubArray(arr);

//     // Print the max subarray sum
//     cout << "The maximum subarray sum is: " << maxSum << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int maxsubarray(vector<int>&nums){
            long long maxi=LLONG_MIN;
            long long sum = 0;
            int n = nums.size();
            for(int i = 0;i<n ;i++){
                sum+=nums[i];
            }
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
            return maxi;
        }
};
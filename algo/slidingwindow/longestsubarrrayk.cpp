// // #include<bits/stdC++.h>
// // using namespace std;

// // int main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     vector<int>nums={4,1,1,1,2,3,5};
// //     long long k ;
// //     cin >>  k;
// //     long long i = 0;
// //     long long  j =0 ;
// //     long long sum = 0;
// //     long long max_lentt= INT_MIN;
// //     while(j < nums.size()){
// //         sum+=nums[j];

// //         while(sum > k){
// //             sum -=nums[i];
// //             i++;
// //         }
// //         if(sum==k){
// //             max_lentt=max(max_lentt , j-i+1);
// //         }
// //         j++;
// //     }
// //     cout << max_lentt << endl ;
// // }


#include<bits/stdc++.h>
using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     vector<int>arr={4,1,1,1,2,3,5};
//     long long k ;
//     cin >> k ;

//     long long i = 0;
//     long long j =0 ;
//     long long max_lentt=INT_MIN;
//     long long sum = 0;
//     while(j<arr.size()){
//         sum +=arr[j];

//         if(sum< k){
//             j++;
//         }
//         else if(sum ==k){
//             max_lentt=max(max_lentt , j-i+1);
//             j++;
//         }
//         else if(sum > k){
//             while(sum > k ){
//                 sum-=arr[i];
//                 i++;
//             }
//             j++;
//         }
//     }
//     cout << max_lentt << endl ;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
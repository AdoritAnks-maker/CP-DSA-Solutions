// // #include<bits/stdc++.h>
// // using namespace std;

// // class Solution{
// //     public:
// //         void leftrotatearray(vector<int>&nums , int k ){
// //     int n = nums.size();
// //     vector<int>temp;
// //     for(int i = 0;i<k ; i++){
// //         temp.push_back(nums[i]);
// //     }
// //     for(int  i =k ; i< n ;i++){
// //         nums[i-k]=nums[i];
// //     }
// //     for(int i = 0 ;i< k ;i++){
// //         nums[n-k+i]=temp[i];
// //     }
// // }
// // };

// // int main(){
// //     int q ;
// //     cin >> q ;
// //     vector<int>arr={1,2,4,5,3,2,4,2,3,4,2,2};
// //     Solution cross;
// //     cross.leftrotatearray(arr, q);

// //     for(auto x : arr){
// //         cout << x << " ";
// //     }
// //     cout << endl;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int>leftrotate(vector<int>&nums , int d ){
//             int n = nums.size();
//             vector<int> temp;
//             for(int i=0 ;i<d ;i++ ){
//                 temp[i]=nums[i];
//             }
//             for(int j =d ;j<n ;j++){
//                 nums[j-d]=nums[j];
//             }
//             for(int i =0 ;i<d ;i++){
//                 nums[i]=temp[i];
//             }
//             return nums;
//         }
// };

// int main(){
//     Solution sol ;
//     vector<int>arr={1,2,3,4,5,6,7};
//     vector<int>ans=sol.leftrotate(arr , 4);
//     for(auto x : ans ){
//         cout << x << " ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> leftrotate(vector<int>&nums , int d ){
            int n = nums.size();
            vector<int>temp;
            for(int i =0;i<d ;i++){
                temp[i]=nums[i];
            }
            for(int i = d ;i<n ;i++){
                nums[i-d]=nums[i];
            }
            for(int i = n-d ;i<n ;i++){
                nums[i]=temp[i-(n-d)];
            }
            return nums ;
        }
};

int main(){
    Solution sol ;
    vector<int>arr={1,2,3,4,5,6,7};
    vector<int>ans=sol.leftrotate(arr , 4);
   for(int i = 0;i< arr.size() ;i++){
    cout << arr[i] << " ";
   }
    return 0;
}
// //#include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<int>movezero(vector<int>&nums){
//             int n = nums.size();
//             vector<int>temp(n , 0);
//             int index=0;

//             for(int i  = 0 ; i< n ;i++){
//                 if(nums[i]!=0){
//                     temp[index]=nums[i];
//                     index++;
//                 }
//             }
//             for(int i = 0;i<n ;i++){
//                 nums[i]=temp[i];
//             }
//         }
// };

// int main(){
//     vector<int>arr={0,1,0,3,12};
//     Solution s;
//     s.movezero(arr);

//     for(auto x : arr){
//         cout << x << " ";
//     }
//     cout << endl ;
// }

#include<bits/stdc++.h>
using namespace std ;

class Solution{
    public:
        void movezero(vector<int>&nums){
            int n = nums.size();
            vector<int>temp(n,0);
            int inex=0;
            for(int i = 0;i<n ;i++){
                if(nums[i]!=0){
                    temp[inex]=nums[i];
                    inex++;
                }
            }
            while(inex<n){
                nums[inex]=0;
                inex++;
            }
        }
};



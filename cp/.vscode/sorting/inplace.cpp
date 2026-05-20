#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums={10,23,32,12,10,98,895,89,89};
    int n = nums.size();
    for(int i = 0;i<n/2 ;i++){
        swap(nums[n-i-1] , nums[i]); // function to reverse an array 
    }
    for(auto x : nums){
        cout << x << " ";
    }
    cout << endl ;
}

// int main(){
//     vector<int>nums={10,23,32,12,10,98,895,89,89};
//     int n = nums.size();
//     vector<int>rev(n);
//     for(int i =0;i<n;i++){
//         rev[n-i-1]=nums[i];
//     }
//     vector<int>arr;
//     for(int i = 0;i<n;i++){
//         arr[i]=rev[i];
//     }

//     for(auto x : arr){
//         cout << x << " ";
//     }
//     cout << endl ;
// }
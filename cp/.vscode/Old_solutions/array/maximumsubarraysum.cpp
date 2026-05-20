// #include<bits/stdc++.h>
// using namespace std;

// int main(){                  // brute force approach 
//     vector<int>arr{-2,-3,-7,-2,-7,-4};
//     int maxi=INT_MIN;
//     for(int i =0;i<arr.size();i++){
//         int sum=0;
//         for(int j = i ;j<arr.size();j++){
//             sum+=arr[j];
//             maxi=max(maxi,sum);
//         }
//     }
//     cout << maxi << endl;
// }


// optimal approach 

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int maxsubarray(vector<int>&nums){
            long long sum = 0;
            long long maxi=INT_MIN;
            for(int i =0;i<nums.size();i++){
                sum+=nums[i];

                if(sum>maxi){
                    maxi=sum;
                }

                if(sum<0){
                    sum=0;
                }
            }
            return maxi;
        }
};


int main(){
    vector<int>arr={2,3,5,-2,7,-4};
    Solution sol;
    int result = sol.maxsubarray(arr);
    cout << result << endl ;
}
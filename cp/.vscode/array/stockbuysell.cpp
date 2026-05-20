// #include<bits/stdc++.h>
// using namespace std;

// class Solution{          /// brute force approach 
//     public:
//         int maxprofit(vector<int>&nums){
//             int n = nums.size();
//             int profit=0;
//             int max_profit=INT_MIN;
//             for(int i = 0;i<n ;i++){
//                 for(int j=i+1;j<n;j++){
//                     profit=nums[j]-nums[i];

//                     max_profit=max(max_profit,profit);
//                 }
//             }
//             return max_profit;
//         }
// };

// int main(){
//     vector<int>prices ={7,1,5,3,6,4};
//     Solution sol ;
//     int result= sol.maxprofit(prices);
//     cout << result << endl;
// }

// optimal approach

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int maxprofit(vector<int>&nums){
            long long mini=INT_MAX;
            long long max_profit=0;
            for(auto prices :nums){
                if(prices<mini){
                    mini=prices;
                }
                else{}{
                    max_profit=max(max_profit , prices-mini);
                }
            }
            return max_profit;
        }
};

int main(){
    vector<int>nums={7,1,5,3,6,4};
    Solution sol;
    int result= sol.maxprofit(nums);

    cout << result << endl;
}


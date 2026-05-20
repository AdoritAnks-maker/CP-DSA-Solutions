// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
//     int longestspan(vector<int> &nums, vector<int> &arr)
//     {
//         int n = nums.size();
//         int m = arr.size();
//         int sum1 = 0;
//         int sum2 = 0;
//         int maxsum1 = INT_MIN;
//         int maxsum2 = INT_MIN;
//         int length=0;
//         for (int i = 0; i < n; i++)
//         {
//             sum1 += nums[i];

//             if (sum1 < 0)
//             {
//                 sum1 = 0;
//             }
//             for (int j = 0; j < m; j++)
//             {
//                 sum2 += arr[j];

//                 if (sum2 < 0)
//                 {
//                     sum2 = 0;
//                 }

//                 if (sum1 ==sum2)
//                 {
//                     maxsum1=max(maxsum1 , sum1);
//                     length=j-i+1;
//                 }
//             }
//         }
//         return length;
//     }
// };

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int longestspan()
};
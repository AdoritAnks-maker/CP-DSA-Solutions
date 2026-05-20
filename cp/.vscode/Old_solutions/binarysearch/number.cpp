// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>nums={11,12,15,18,2,5,6,8};
//     int count = 0;
//     for(int i=nums.size()-2;i>=0;i--){
//         if(nums[i]>nums[i+1]){
//             count = nums.size()-1-i;
//             break;
//         }
//     }
//     cout << count << endl
// }

#include<bits/stdc++.h>
using namespace std ;

class Solution{
    public:
        int rotationtimes(vector<int>& nums) {
    int n = nums.size();
    int start = 0, end = n - 1;

    while(start <= end) {

        if(nums[start] <= nums[end]) 
            return start;

        int mid = start + (end - start) / 2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;

        if(nums[mid] <= nums[next] && nums[mid] <= nums[prev])
            return mid;

        if(nums[start] <= nums[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
    }

};

int main(){
    vector<int>arr={11,12,15,18,2,5,6,8};
    Solution sol;
    cout << sol.rotationtimes(arr);
}
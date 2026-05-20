#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minimum_index(vector<int>& nums){
        int n = nums.size();
        int start = 0, end = n - 1;

        while(start <= end){

            if(nums[start] <= nums[end])
                return start;

            int mid = start + (end - start) / 2;
            int prev = (mid + n - 1) % n;
            int next = (mid + 1) % n;
            if(nums[mid] <= nums[prev] && nums[mid] <= nums[next])
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
    vector<int> arr = {11,12,15,18,2,5,6,8};
    Solution sol;
    cout << sol.minimum_index(arr);
}

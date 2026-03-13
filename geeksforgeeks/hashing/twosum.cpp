#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        return binarySearch(arr, 0, arr.size() - 1, target);
    }

    bool binarySearch(vector<int>& arr, int left,
                      int right, int target) {
        while (left < right) {
            int sum = arr[left] + arr[right];
            if (sum == target) return true;
            else if (sum < target) left++;
            else right--;
        }
        return false;
    }
};
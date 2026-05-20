#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void leftRotateByOne(vector<int>& nums) {
        int n = nums.size();
        int temp=nums[0];
        for(int i = 1 ;i<n ;i++){
            nums[i-1]=nums[i];
        }
        nums[n-1]=temp;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 2, 1, 2, 4};

    Solution s;
    s.leftRotateByOne(arr);

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

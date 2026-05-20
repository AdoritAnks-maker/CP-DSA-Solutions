#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortarray(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i + 1] < nums[i])
            {
                swap(nums[i], nums[i + 1]);
            }
        }
    }
};

int main()
{
    vector<int> arr = {0, 2, 1, 2, 0};
    Solution sol;

    sol.sortarray(arr);
    for (auto x : arr)
    {
        cout << x << " ";
    }
}

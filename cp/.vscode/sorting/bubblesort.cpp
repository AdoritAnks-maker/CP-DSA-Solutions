#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {10, 23, 32, 12, 10, 98, 895, 89, 89};
    int n = nums.size();
    bool swapped = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
    for (auto x : nums)
    {
        cout << x << " ";
    }
    cout << endl;
}
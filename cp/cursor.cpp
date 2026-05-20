#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int operations(vector<int> &nums)
    {
        int n = nums.size();
        int drop = -1;
        for (int i = 0; i < n; i++)
        {
            int j = i + 1 < n ? i + 1 : 0;
            if (nums[i] > nums[j])
            {
                if (drop != -1)
                    return -1;
                drop = i;
            }
        }
        return drop == -1 ? 0 : n - drop - 1;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    Solution sol;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = sol.operations(arr);
    cout << result << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (auto &x : nums)
    {
        cin >> x;
    }
    vector<vector<int>> dp(n + 1, vector<int>(m, 0));
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (dp[i][j])
            {
                dp[i + 1][(j + nums[i]) % m] = 1;
            }
        }
    }
    if (dp[n][0])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return  0; 
}
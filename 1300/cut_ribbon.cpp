#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> dp(4, vector<int>(n + 1));
    for (int i = 0; i < 4; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j], 1 + dp[i][j - a[i - 1]]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[3][n] << endl;
}

int main()
{
    fast;
    solve();
}
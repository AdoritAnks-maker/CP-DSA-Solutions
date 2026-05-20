#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;

    vector<ll> cnt(10, 0);
    vector<ll> arr;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        int d = x % 10;
        if (cnt[d] < 3)
        {
            arr.push_back(x);
            cnt[d]++;
        }
    }
    int m = arr.size();
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            for (int k = j + 1; k < m; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) % 10 == 3)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
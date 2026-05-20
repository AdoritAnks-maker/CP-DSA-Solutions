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
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    int j = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            sum += v[i];
        }
    }
    ll extra_awake = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] == 0)
        {
            extra_awake += v[i];
        }
    }
    ll max_extra = extra_awake;
    for (int i = k; i < n; i++)
    {
        if (a[i] == 0)
        {
            extra_awake += v[i];
        }
        if (a[i - k] == 0)
        {
            extra_awake -= v[i - k];
        }
        max_extra = max(max_extra, extra_awake);
    }
    cout << sum+max_extra << endl;
}

int main()
{
    fast;
    int t = 1;
    while (t--)
    solve();
}
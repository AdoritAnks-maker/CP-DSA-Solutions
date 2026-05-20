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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> ans = v;
    sort(all(ans));
    int mid = ans[n / 2];
    int sum = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= mid)
            sum++;
        else
            sum--;
        if (sum > 0)
        {
            res++;
            sum = 0;
        }
    }
    cout << res << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
}
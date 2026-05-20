#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

ll cnt2(ll x)
{
    ll c = 0;
    while (x % 2 == 0)
    {
        c++;
        x /= 2;
    }
    return c;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);

    ll cur = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cur += cnt2(v[i]);
    }

    vector<ll> gain;

    for (int i = 1; i <= n; i++)
    {
        gain.push_back(cnt2(i));
    }

    sort(gain.rbegin(), gain.rend());

    int ops = 0;

    for (int i = 0; i < n && cur < n; i++)
    {
        cur += gain[i];
        ops++;
    }

    if (cur < n)
        cout << -1 << endl;
    else
        cout << ops << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
}
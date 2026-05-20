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
    ll n;
    cin >> n;

    ll cnt4 = -1;
    ll cnt7 = -1;
    ll minnum = LLONG_MAX;
    for (ll y = 0; y <= n / 7; y++)
    {
        ll rem = n - 7 * y;
        if (rem % 4 == 0)
        {
            ll x = rem / 4;
            if (x + y < minnum)
            {
                minnum = x + y;
                cnt4 = x;
                cnt7 = y;
            }
        }
    }
    if (cnt4 == -1 || cnt7 == -1)
    {
        cout << -1 << '\n';
    }
    else
    {
        for (ll i = 0; i < cnt4; i++)
        {
            cout << 4;
        }
        for (ll i = 0; i < cnt7; i++)
        {
            cout << 7;
        }
        cout << '\n';
    }
}

int main()
{
    fast;
    solve();
    return 0;
}
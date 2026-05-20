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
    ll l, r;
    cin >> l >> r;
    ll x = l ^ r;
    ll ans = 1;

    while (x)
    {
        ans <<= 1;
        x >>= 1;
    }
    cout << ans - 1 << endl;
}

int main()
{
    fast;
    solve();
}
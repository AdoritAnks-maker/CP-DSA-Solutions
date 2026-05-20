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

ll divisor(ll n)
{
    return n % 10;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll k = n / m;
    ll cycle_sum = 0;
    vector<ll> digits;
    for (int i = 1; i <= 10; i++)
    {
        ll d = divisor(i * m);
        digits.push_back(d);
        cycle_sum += d;
    }
    ll full = k / 10;
    ll ans = full * cycle_sum;
    ll remaining = k % 10;
    for (int i = 0; i < remaining; i++)
    {
        ans += digits[i];
    }
    cout << ans << endl;
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
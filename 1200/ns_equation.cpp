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

ll sum(ll x)
{
    ll sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
void solve()
{
    int n;
    cin >> n;
    ll ans = -1;

    for (ll s = 1; s <= 162; s++)
    {
        ll D = s * s + 4 * n;
        ll d = sqrt(D);
        if (d * d != D)
            continue;
        if ((-s + d) % 2 != 0)
            continue;
        ll x = (-s + d) / 2;
        if (sum(x) == s && x > 0)
        {
            if (x < ans || ans == -1)
                ans = x;
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;
    solve();
}
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
    long long n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;
    if (n <= 3)
    {
        cout << 1 << endl;
        return;
    }
    long long dist = abs(x1 - x2);
    long long d = min(dist, n - dist);
    long long ans = min(d + k, n / 2);
    cout << ans << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
}
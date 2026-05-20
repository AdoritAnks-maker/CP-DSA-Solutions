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
    int res = 0;
    vector<int> cnt(3);
    for (int x = 0; x <= 2; x++)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 3 == x)
            {
                cnt[x]++;
            }
        }
    }
    while (*min_element(cnt.begin(), cnt.end()) != n / 3)
    {
        for (int i = 0; i < 3; i++)
        {
            if (cnt[i] > n / 3)
            {
                cnt[i]--;
                cnt[(i + 1) % 3]++;
                res++;
            }
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
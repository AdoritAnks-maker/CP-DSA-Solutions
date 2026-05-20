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
    sort(all(v));
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ll s = v[i] + v[j];
            map<ll, int> mpp;
            for (auto x : v)
            {
                mpp[x]++;
            }
            int cnt = 0;
            for (int k = 0; k < n; k++)
            {
                ll need = s - v[k];

                if (mpp[need] == 0)
                    continue;
                if (v[k] == need && mpp[v[k]] < 2)
                    continue;
                mpp[v[k]]--;
                mpp[need]--;
                cnt++;
            }
            ans = max(ans, cnt);
        }
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
}
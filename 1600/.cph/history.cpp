#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), [](auto &a, auto &b)
    {
        if (a.first == b.first)
            return a.second > b.second;
        return a.first < b.first;
    });

    ll count = 0;
    ll maxR = -1;

    for (int i = 0; i < n; i++)
    {
        if (v[i].second < maxR)
        {
            count++;
        }
        else
        {
            maxR = v[i].second;
        }
    }

    cout << count << "\n";
}

int main()
{
    fast;
    solve();
}
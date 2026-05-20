#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mod 1000000007

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == x)
            found = true;
    }

    int ans = 0;
    if (!found)
    {
        a.push_back(x);
        ans++;
    }

    while (true)
    {
        sort(all(a));
        int med = a[(a.size() - 1) / 2];
        if (med == x)
            break;
        if (med < x)
            a.push_back(100000);
        else
            a.push_back(1);
        ans++;
    }
    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}
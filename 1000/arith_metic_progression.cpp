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
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    sort(all(v));
    bool all_same_element = true;
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[0])
        {
            all_same_element = false;
            break;
        }
    }
    if (all_same_element)
    {
        cout << 1 << endl;
        cout << v[0] << endl;
        return;
    }
    set<ll> diff;
    for (int i = 1; i < n; i++)
    {
        diff.insert(v[i] - v[i - 1]);
    }
    if (diff.size() == 1)
    {
        ll d = *diff.begin();
        if (n == 2)
        {
            set<ll> ans;
            ans.insert(v[0] - d);
            ans.insert(v[1] + d);
            if (d % 2 == 0)
            {
                ans.insert(v[0] + d / 2);
            }
            cout << ans.size() << endl;
            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
            return;
        }
        cout << 2 << endl;
        cout << v[0] - d << " " << v[n - 1] + d << endl;
        return;
    }
    if (diff.size() == 2)
    {
        auto it = diff.begin();
        ll d1 = *it;
        ll cnt = 0;
        it++;
        ll d2 = *it;
        if (d2 != 2 * d1)
        {
            cout << 0 << endl;
            return;
        }
        int pos = -1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] == d2)
            {
                cnt++;
                pos = v[i - 1];
            }
        }
        if (cnt == 1)
        {
            cout << 1 << endl;
            cout << pos + d1 << endl;
            return;
        }
        else
        {
            cout << 0 << endl;
            return;
        }
    }
    cout << 0 << endl;
    return;
}

int main()
{
    fast;
    solve();
    return 0;
}
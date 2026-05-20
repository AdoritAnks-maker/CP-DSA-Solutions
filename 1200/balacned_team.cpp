#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int left = 0;
    int ans = 0;

    for (int right = 0; right < n; right++)
    {
        while (v[right] - v[left] > 5)
            left++;

        ans = max(ans, right - left + 1);
    }

    cout << ans << "\n";
}

int main()
{
    fast;
    solve();
    return 0;
}
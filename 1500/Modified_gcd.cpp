#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll g = __gcd(a, b);

    vector<ll> divisors;

    for (ll i = 1; i * i <= g; i++)
    {
        if (g % i == 0)
        {
            divisors.push_back(i);

            if (i != g / i)
            {
                divisors.push_back(g / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    ll q;
    cin >> q;

    while (q--)
    {
        ll low, high;
        cin >> low >> high;

        ll start = 0;
        ll end = divisors.size() - 1;

        ll ans = -1;

        while (start <= end)
        {
            ll mid = start + (end - start) / 2;

            if (divisors[mid] <= high)
            {
                ans = divisors[mid];
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        if (ans >= low)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
}

int main()
{
    fast;
    solve();
}
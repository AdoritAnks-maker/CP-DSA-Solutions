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
    string s;
    cin >> s;

    ll nb, ns, nc;
    cin >> nb >> ns >> nc;

    ll pb, ps, pc;
    cin >> pb >> ps >> pc;

    ll r;
    cin >> r;

    ll cb = 0, cs = 0, cc = 0;

    for (auto ch : s)
    {
        if (ch == 'B')
            cb++;
        else if (ch == 'S')
            cs++;
        else
            cc++;
    }

    auto canmake = [&](ll x)
    {
        ll needB = max(0LL, cb * x - nb);
        ll needS = max(0LL, cs * x - ns);
        ll needC = max(0LL, cc * x - nc);

        ll cost =
            (needB * pb) +
            (needS * ps) +
            (needC * pc);

        return cost <= r;
    };

    ll low = 0;
    ll high = 1e13;
    ll ans = 0;

    while (low <= high)
    {
        ll mid = low + (high - low) / 2;

        if (canmake(mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    fast;
    solve();
}
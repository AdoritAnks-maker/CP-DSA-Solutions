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
    long long a, b;
    cin >> a >> b;

    long long ans = 0;

    while (a != b)
    {
        if (a > b)
        {
            ans += a / b;
            a %= b;

            if (a == 0)
            {
                ans--;
                break;
            }
        }
        else
        {
            ans += b / a;
            b %= a;

            if (b == 0)
            {
                ans--;
                break;
            }
        }
    }

    cout << ans + 1 << endl;
}

int main()
{
    fast;
    solve();
}
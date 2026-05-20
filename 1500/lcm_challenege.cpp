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
ll lcmnum(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
void solve()
{
    ll n;
    cin >> n;
    if (n < 3)
    {
        cout << n << endl;
        return;
    }
    if (n == 3)
    {
        cout << 6 << endl;
    }
    else
    {
        if (n % 2 == 1)
        {
            cout << (n * (n - 1) * (n - 2)) << endl;
        }
        else
        {
            if (n % 3 != 0)
            {
                cout << n * (n - 1) * (n - 3) << endl;
            }
            else
            {
                cout << (n - 1) * (n - 2) * (n - 3) << endl;
            }
        }
    }
}

int main()
{
    fast;
    solve();
}
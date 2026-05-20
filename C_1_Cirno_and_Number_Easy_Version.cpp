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
    ll a, n;
    cin >> a >> n;

    vector<int> digit(n);

    for (int i = 0; i < n; i++)
    {
        cin >> digit[i];
    }

    string s = to_string(a);

    int lengtt = s.size();

    string res = "";

    for (int i = 0; i < lengtt; i++)
    {
        res += to_string(digit[0]);
    }

    long long num = stoll(res);

    long long ans = LLONG_MAX;

    if (num >= a)
    {
        ans = min(ans, a - num);
    }

    if (n > 1)
    {
        string k = "";

        for (int i = 0; i < lengtt; i++)
        {
            k += to_string(digit[1]);
        }

        long long num2 = stoll(k);

        if (num2 >= a)
        {
            ans = min(ans, num2 - a);
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
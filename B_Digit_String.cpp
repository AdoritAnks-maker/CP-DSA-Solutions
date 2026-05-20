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
    int dp2 = 0;
    int dp13 = 0;
    for (char c : s)
    {
        if (c == '2')
        {
            dp2++;
        }
        else if (c == '1' || c == '3')
        {
            dp13 = max(dp13 + 1, dp2 + 1);
        }
    }
    int keep = max(dp2, dp13);
    cout << (int)s.size() - keep << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
}
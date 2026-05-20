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
    string s(n, ' ');
    cin >> s;
    string a(n, ' ');
    string b(n,' ');
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            a[i] = '1';
            b[i] = '0';

            for (int j = i + 1; j < n; j++)
            {
                b[j] = s[j];
            }
            break;
        }
        else
        {
            a[i] = b[i] = '0' + (s[i] - '0') / 2;
        }
    }
    cout << a << endl
         << b << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
}
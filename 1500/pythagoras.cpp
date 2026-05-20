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

    int count = 0;
    for (int a = 1; a <= n; a++)
    {
        for (int b = a + 1; b <= n; b++)
        {
            int val = (a * a) + (b * b);
            int c = sqrt(val);

            if (c <= n && c * c == val)
            {
                count++;
            }
        }
    }

    cout << count << endl;
}

int main()
{
    fast;
    solve();
}
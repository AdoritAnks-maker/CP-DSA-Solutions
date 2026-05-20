#include <bits/stdc++.h>
using namespace std;

long long lcmnum(long long a, long long b)
{
    return (a * b) / __gcd(a, b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 2, 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n + 2, 1);
        for (int i = 1; i <= n + 1; i++)
        {
            b[i] = lcmnum(a[i], a[i - 1]);
        }
        bool found = false;
        for (int i = 1; i <= n; i++)
        {
            if (__gcd(b[i], b[i + 1]) != a[i])
            {
                found = true;
                break;
            }
        }
        cout << (found ? "NO" : "YES") << endl;
    }
    return 0;
}
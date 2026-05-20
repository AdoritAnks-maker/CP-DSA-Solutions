#include <bits/stdc++.h>
using namespace std;

using ll = long long;
long long lcm(long long a, long long b)
{
    return (a * b) / __gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : a)
            cin >> x;

        int ans = int(a[0] != __gcd(a[0], a[1])) + int(a[n - 1] != __gcd(a[n - 1], a[n - 2]));
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] != lcm(__gcd(a[i], a[i - 1]), __gcd(a[i], a[i + 1])))
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
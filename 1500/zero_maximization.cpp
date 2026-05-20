#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    map<pair<long long, long long>, long long> mpp;
    long long extra = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (b[i] == 0)
                extra++;
            continue;
        }

        long long num = -b[i];
        long long den = a[i];

        long long g = __gcd(abs(num), abs(den));
        num /= g;
        den /= g;

        if (den < 0)
        {
            num *= -1;
            den *= -1;
        }

        mpp[{num, den}]++;
    }

    long long ans = 0;
    for (auto &x : mpp)
    {
        ans = max(ans, x.second);
    }

    cout << ans + extra << "\n";
}
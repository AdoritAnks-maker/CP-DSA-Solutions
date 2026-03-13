#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, k;
        cin >> n >> k;
        if (n <= k)
        {
            cout << 1 << endl;
            continue;
        }
        long long ans = n;
        for (long long i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i <= k)
                {
                    ans = min(ans, n / i);
                }
                if (n / i <= k)
                {
                    ans = min(ans, i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
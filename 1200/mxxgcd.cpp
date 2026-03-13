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
        long long x, n;
        cin >> x >> n;
        long long res = x / n;
        long long ans = 0;
        for (long long i = 1; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                if (i <= res)
                {
                    ans = max(ans, i);
                }
                if (x / i <= res)
                {
                    ans = max(ans, x / i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
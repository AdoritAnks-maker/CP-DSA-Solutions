#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        if (k >= 3)
        {
            cout << 0 << endl;
            continue;
        }

        long long ans = a[0];

        for (int i = 1; i < n; i++)
            ans = min(ans, a[i] - a[i - 1]);

        if (k == 1)
        {
            cout << ans << endl;
            continue;
        }

        // k = 2
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long d = a[j] - a[i];

                int pos = lower_bound(a.begin(), a.end(), d) - a.begin();

                if (pos < n)
                    ans = min(ans, abs(a[pos] - d));

                if (pos > 0)
                    ans = min(ans, abs(a[pos - 1] - d));
            }
        }

        cout << ans << endl ;
    }
}
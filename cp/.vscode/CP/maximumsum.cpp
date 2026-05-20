#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        vector<long long> pr(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            pr[i + 1] = pr[i] + arr[i];
        }
        long long ans = 0;
        for (int i = 0; i <= k; i++)
        {
            if (2 * i > n && (k - i) > n)
                continue;

            long long current = pr[n - (k - i)] - pr[i];
            ans = max(ans, current);
        }
        cout << ans << endl;
    }
}
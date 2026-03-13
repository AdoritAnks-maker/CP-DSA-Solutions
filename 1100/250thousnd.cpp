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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<long long> prefsum(n);
        prefsum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefsum[i] = arr[i] + prefsum[i - 1];
        }
        long long ans = LLONG_MIN;
        for (int i = 1; i <= n; i++)
        {

            if (n % i == 0)
            {
                long long mx_sum = LLONG_MIN;
                long long mn_sum = LLONG_MAX;

                for (int j = i; j < n; j += i)
                {
                    long long sum = prefsum[j + i] - prefsum[j];
                    mx_sum = max(mx_sum, sum);
                    mn_sum = min(mn_sum, sum);
                }
                ans = max(ans, mx_sum - mn_sum);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
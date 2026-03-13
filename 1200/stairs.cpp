#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long n, q;
        cin >> n >> q;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<long long> prefsum(n);
        prefsum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefsum[i] = prefsum[i - 1] + arr[i];
        }
        vector<long long> prefixmax(n);
        prefixmax[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefixmax[i] = max(prefixmax[i - 1], arr[i]);
        }
        long long x;
        while (q--)
        {
            cin >> x;
            int start = 0;
            int end = prefsum.size() - 1;
            long long ans = 0;
            while (start <= end)
            {
                int mid = start + (end - start) / 2;
                if (prefixmax[mid] <= x)
                {
                    ans = prefsum[mid];
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    vector<long long> nums(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<long long> prefsum(n);
    prefsum[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        prefsum[i] = prefsum[i - 1] + nums[i];
    }
    for (int i = 0; i < n; i++)
    {
    }
    long long m;
    cin >> m;
    long long x;
    while (m--)
    {
        cin >> x;
        int start = 0;
        int end = n - 1;
        int ans = 0;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (prefsum[mid] >= x)
            {
                ans = mid + 1;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
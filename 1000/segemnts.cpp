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
        long long n, x;
        cin >> n >> x;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<pair<long long, long long>> segments(n);
        for (long long i = 0; i < n; i++)
        {
            segments[i] = {arr[i] - x, arr[i] + x};
        }
        long long left = segments[0].first;
        long long right = segments[0].second;
        long long count = 0;
        for (long long i = 1; i < n; i++)
        {
            left = max(left, segments[i].first);
            right = min(right, segments[i].second);
            if (left > right)
            {
                count++;
                left = segments[i].first;
                right = segments[i].second;
            }
        }
        cout << count << endl;
    }
    return 0;
}
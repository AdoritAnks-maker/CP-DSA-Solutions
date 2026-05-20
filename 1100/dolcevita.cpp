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
        long long wx = 0;
        int total_count = 0;
        while (wx != x)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
                if (sum > x)
                {
                    total_count += (i - 0);
                }
            }
            wx++;
        }
        cout << total_count << endl;
    }
    return 0;
}
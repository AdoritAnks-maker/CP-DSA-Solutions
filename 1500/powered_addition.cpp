#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

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
        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << 0 << endl;
            continue;
        }

        long long mx_diff = 0;
        long long min_so_far = arr[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] > min_so_far)
            {
                mx_diff = max(mx_diff, arr[i] - min_so_far);
            }
            min_so_far = min(min_so_far, arr[i]);
        }

        long long num = 0;

        for (long long x = 0; x < 100; x++)
        {
            if (binpow(2, x) > mx_diff)
            {
                num = x;
                break;
            }
        }

        cout << num << endl;
    }
}
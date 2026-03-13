#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return (a * b) / __gcd(a, b);
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
        {
            cin >> arr[i];
        }
        long long x = 1;
        for (int i = 0; i + 1 < n; i++)
        {
            if (arr[i + 1] % arr[i] != 0)
            {
                long long gnum = __gcd(arr[i], arr[i + 1]);
                long long candidate = arr[i] / gnum;
                x = lcm(x, candidate);
            }
        }
        cout << x << endl;
    }
    return 0;
}
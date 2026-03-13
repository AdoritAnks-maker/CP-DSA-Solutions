#include <bits/stdc++.h>
using namespace std;

long long lcmnum(long long a, long long b)
{
    return (a * b) / __gcd(a, b);
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<long long> arr(n);
        vector<long long> b(n + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            b[i] = lcmnum(arr[i], arr[i + 1]);
        }

        bool ok = true;

        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] != __gcd(arr[i], arr[i + 1]))
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES" << endl ;
        else
            cout << "NO" << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = res * a;
        }
        a = a * a;
        b >>= 1;
    }
    return res;
}

long long sumnum(long long n)
{
    return n * (n + 1) / 2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long k, x;
        cin >> k >> x;
        long long ans = 0;
        long long num = binpow(k, 2);
        if (num <= x)
        {
            cout << k + 1 << endl;
            continue;
        }
        else
        {
            long long left = 1;
            long long right = 2*k;
            while (left <= right)
            {
                long long mid = (left) + (right - left) / 2;
                if (sumnum(mid) <= x)
                {
                    ans = mid;
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }
        cout << ans << endl;
    }
}
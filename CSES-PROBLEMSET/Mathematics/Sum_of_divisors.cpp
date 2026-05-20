#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;

long long suminrange(long long l, long long r)
{
    long long cont = (r - l + 1) % mod;
    long long sumlr = ((l % mod) + (r % mod)) % mod;
    long long res = (cont * sumlr) % mod;
    if (res % 2 == 0)
    {
        res /= 2;
    }
    else
    {
        res = (res + mod) / 2;
    }
    return res % mod;
}

int main()
{
    long long n;
    cin >> n;
    long long ans = 0;
    long long d = 1;
    while (d <= n)
    {
        long long q = n / d;
        long long r = n / q;
        long long sumr = suminrange(d, r);
        ans = (ans + (sumr * (q % mod)) % mod) % mod;
        d = r + 1;
    }
    cout << ans << endl;
}
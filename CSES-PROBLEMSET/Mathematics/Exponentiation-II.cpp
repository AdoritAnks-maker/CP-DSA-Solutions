#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b, long long mod)
{
    long long res = 1;
    a %= mod;

    while (b)
    {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
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

    const long long MOD = 1000000007;

    while (tc--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long num = binpow(b, c, MOD - 1);
        cout << binpow(a, num, MOD) << "\n";
    }
}
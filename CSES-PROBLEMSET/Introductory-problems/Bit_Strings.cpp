#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b)
{
    long long res = 1;
    long long mod = 1000000007;
    a %= mod;
    if (b == 0)
    {
        return 1;
    }
    while (b)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long num = binpow(2, n);
    cout << num << endl;
}

#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b)
{
    long long mod = 1000000007;
    long long res = 1;
    if (a == 0 && b == 0 || a > 0 && b == 0)
    {
        res = 1;
    }
    while (b > 0)
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long a, b ;
        cin >> a >> b;
        long long num = binpow(a, b);
        cout << num << endl;
    }
    return 0;
}
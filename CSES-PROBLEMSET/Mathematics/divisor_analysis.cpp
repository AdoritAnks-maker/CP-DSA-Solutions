#include <bits/stdc++.h>
using namespace std;

static const long long mod = 1000000007;

long long binpow(long long a, long long b)
{
    long long res = 1;
    a %= mod; // ✅ FIX
    while (b)
    {
        if (b & 1)
            res = (res * a) % mod; 
        a = (a * a) % mod;         
        b >>= 1;
    }
    return res;
}

long long numberOfDivisors(long long num)
{
    long long total = 1;
    for (long long i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            int e = 0;
            while (num % i == 0)
            {
                e++;
                num /= i;
            }
            total *= (e + 1);
        }
    }
    if (num > 1)
        total *= 2;

    return total;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long num = 1;

    while (n--)
    {
        long long x, k;
        cin >> x >> k;

        num = (num * binpow(x, k)) % mod; 
    }

    long long res = numberOfDivisors(num);

    long long prod = binpow(num, res / 2); // already modded

    long long ans = 0;

    for (long long i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            ans = (ans + i) % mod; 

            if (i != num / i)
                ans = (ans + (num / i) % mod) % mod; 
        }
    }

    cout << res << " " << ans << " " << prod << endl;
}
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
const int MAX = 1000000; 

long long fact[MAX + 1], invFact[MAX + 1];


long long power(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}


void precompute()
{
    fact[0] = 1;
    for (int i = 1; i <= MAX; i++)
        fact[i] = (fact[i - 1] * i) % MOD;

    invFact[MAX] = power(fact[MAX], MOD - 2); 

    for (int i = MAX - 1; i >= 0; i--)
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
}


long long nCr(int n, int r)
{
    if (r > n || r < 0) return 0;
    return (fact[n] * invFact[r] % MOD * invFact[n - r] % MOD) % MOD;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int b, a;
        cin >> b >> a;
        cout << nCr(b, a) << endl;
    }
}
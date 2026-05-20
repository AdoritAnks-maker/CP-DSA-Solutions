#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

int main()
{
    int tc;
    cin >> tc;

    long long inv2 = 500000004; 
    long long inv3 = 333333336; 

    while (tc--)
    {
        long long n;
        cin >> n;

        n %= MOD;

        long long sq_sum = n;
        sq_sum = (sq_sum * (n + 1)) % MOD;
        sq_sum = (sq_sum * (2 * n + 1)) % MOD;
        sq_sum = (sq_sum * inv3) % MOD; 

        long long ntrl_sum = (n * (n + 1)) % MOD;
        ntrl_sum = (ntrl_sum * inv2) % MOD;

        long long ans = (sq_sum - ntrl_sum + MOD) % MOD;
        long long res = (2022 * ans) % MOD;

        cout << res << endl;
    }
    return 0;
}
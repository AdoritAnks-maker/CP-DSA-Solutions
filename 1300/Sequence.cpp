#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
long long solve(long long n, long long x, long long y)
{
    n %= 6;

    if (n == 1)
        return (x % MOD + MOD) % MOD;
    if (n == 2)
        return (y % MOD + MOD) % MOD;
    if (n == 3)
        return ((y - x) % MOD + MOD) % MOD;
    if (n == 4)
        return ((-x) % MOD + MOD) % MOD;
    if (n == 5)
        return ((-y) % MOD + MOD) % MOD;
    if (n == 0)
        return ((x - y) % MOD + MOD) % MOD;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long x, y;
    cin >> x >> y;
    long long n;
    cin >> n;
    long long ans = solve(n, x, y);
    cout << (ans % MOD + MOD) % MOD << endl;
}
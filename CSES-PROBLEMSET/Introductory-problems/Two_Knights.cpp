#include <bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b)
{
    long long res = 1;
    if (b == 0)
    {
        return 1;
    }
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
long long solve(long long n)
{
    long long num = binpow(n, 2);
    long long ans = num * (num - 1) / 2;
    long long sub = 4 * (n - 1) * (n - 2);
    return ans - sub;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << solve(i) << endl;
    }
    return 0;
}
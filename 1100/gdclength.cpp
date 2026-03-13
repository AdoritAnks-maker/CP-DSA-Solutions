#include <bits/stdc++.h>
using namespace std;

long long binpow(int a, int b)
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        long long g = binpow(10, c - 1);
        long long x = g * (binpow(10, a - c));
        long long y = g * (binpow(10, b - c) + 1);
        cout << x << " " << y << endl;
    }
    return 0;
}
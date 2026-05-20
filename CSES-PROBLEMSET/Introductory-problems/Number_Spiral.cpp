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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long y, x;
        cin >> y >> x;
        long long num = binpow(y, x);
        if (x % 2 == 0)
        {
            cout << num - 1 << endl;
        }
        if (x % 2 == 1)
        {
            cout << num << endl;
        }
    }
    return 0;
}
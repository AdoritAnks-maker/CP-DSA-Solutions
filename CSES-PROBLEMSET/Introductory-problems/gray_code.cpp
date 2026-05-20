#include <bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b)
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
int g(int n)
{
    return n ^ (n >> 1);
}
int main()
{
    int n;
    cin >> n;
    long long cx = binpow(2, n);
    for (int i = 0; i < cx; i++)
    {
        int gm = g(i);

        for (int j = n - 1; j >= 0; j--)
        {
            cout << ((gm >> j) & 1);
        }
        cout << endl;
    }
    return 0;
}
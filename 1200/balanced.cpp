#include <bits/stdc++.h>
using namespace std;
long long gcdnum(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcdnum(b, a % b);
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long x, n;
        cin >> x >> n;
        if (x == n)
        {
            cout << 1 << endl;
            continue;
        }
        cout << 2 * gcdnum(x, n) << endl;
    }
    return 0;
}

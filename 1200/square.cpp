#include <bits/stdc++.h>
using namespace std;

long long gcdnum(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return gcdnum(b , a%b);
}
long long lcmnum(long long a, long long b)
{
    return (a * b) / gcdnum(a, b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        long long m = 4 * n;
        long long res = lcmnum(n + 1, m);
        long long ans = res / (n + 1);
        cout << ans + 1 << endl;
    }
    return 0;
}
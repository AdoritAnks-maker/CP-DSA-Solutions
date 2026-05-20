#include <bits/stdc++.h>
using namespace std;

long long lcmnum(long long a, long long b)
{
    return (a * b) / __gcd(a, b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long x;
        cin >> x;
        for (long long i = 1; i * i <= x; i++)
        {
            for (int j = i; j <= x; j++)
            {
                if (lcmnum(i, j) == x)
                {
                    cout << i << " " << j << " "<< endl;
                    break;
                }
            }
        }
    }
    return 0;
}
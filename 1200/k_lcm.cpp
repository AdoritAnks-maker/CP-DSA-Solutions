#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return (a / __gcd(a, b)) * b; // safer to avoid overflow
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n , k ;
        cin >> n >> k ;

        long long left = -1, mid = -1, right = -1;
        long long best_lcm = LLONG_MAX;

        for (long long i = 1; i <= n; i++)
        {
            for (long long j = 1; j <= n; j++)
            {
                long long k = n - (i + j);

                if (k <= 0) continue;

                long long curr_lcm = lcm(i, lcm(j, k));

                if (curr_lcm <= n / 2 && curr_lcm < best_lcm)
                {
                    best_lcm = curr_lcm;
                    left = i;
                    mid = j;
                    right = k;
                }
            }
        }

        cout << left << " " << mid << " " << right << "\n";
    }
    return 0;
}
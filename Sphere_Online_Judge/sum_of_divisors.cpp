#include <bits/stdc++.h>
using namespace std;

long long sumdivsor(long long n)
{
    long long total = 1;

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int e = 0;
            while (n % i == 0)
            {
                e++;
                n /= i;
            }

            long long sum = 0;
            long long pow = 1;

            for (int j = 0; j <= e; j++)   // FIXED
            {
                sum += pow;
                pow *= i;
            }

            total *= sum;
        }
    }

    if (n > 1)
    {
        total *= (1 + n);
    }

    return total;
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

        cout << sumdivsor(n)-n << "\n";
    }

    return 0;
}
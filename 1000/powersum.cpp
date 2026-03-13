#include <bits/stdc++.h>
using namespace std;

long long productOfDistinctPrimes(long long n)
{
    long long prod = 1;

    if (n % 2 == 0)
    {
        prod *= 2;
        while (n % 2 == 0)
            n /= 2;
    }

 
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            prod *= i;
            while (n % i == 0)
                n /= i;
        }
    }


    if (n > 1)
        prod *= n;

    return prod;
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

        cout << productOfDistinctPrimes(n) << endl;
    }

    return 0;
}
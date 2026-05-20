#include <bits/stdc++.h>
using namespace std;

vector<long long> primes;

void sieve(long long n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}

long long numberdivisors(long long n)
{
    long long total = 1;
    for (long long p : primes)
    {
        if ((long long)p * p > n)
        {
            break;
        }
        if (n % p == 0)
        {
            long long e = 0;
            while (n % p == 0)
            {
                e++;
                n /= p;
            }
            total *= (e + 1);
        }
    }
    if (n > 1)
    {
        total *= 2;
    }
    return total;
}

int main()
{
    int tc;
    cin >> tc;

    sieve(1000000);
    while (tc--)
    {
        long long n;
        cin >> n;
        long long result = numberdivisors(n);
        cout << result << endl;
    }
    return 0;
}
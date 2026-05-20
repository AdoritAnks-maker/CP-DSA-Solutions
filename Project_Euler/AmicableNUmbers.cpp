#include <bits/stdc++.h>
using namespace std;

vector<long long> primes;

void sieve(long long n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
            primes.push_back(i);
    }
}

long long sumdivisors(long long n)
{
    long long total = 1;
    for (auto p : primes)
    {
        if ((long long)p * p > n)
            break;
        if (n % p == 0)
        {
            long long e = 0;
            while (n % p == 0)
            {
                e++;
                n /= p;
            }
            long long sum = 0;
            long long pow = 1;
            for (long long i = 0; i <= e; i++)
            {
                sum += pow;
                pow *= p;
            }
            total *= sum;
        }
    }
    if (n > 1)
        total *= (1 + n);
    return total;
}

int main()
{
    long long limit = 10000; 
    sieve(limit);

    vector<long long> amicables;

    for (long long a = 2; a < limit; a++)
    {
        long long b = sumdivisors(a) - a;
        if (b > a && b <= limit)
        {
            long long sum_b = sumdivisors(b) - b;
            if (sum_b == a)
            {
                amicables.push_back(a);
                amicables.push_back(b);
            }
        }
    }

    long long total = accumulate(amicables.begin(), amicables.end(), 0LL);
    cout << "Sum of amicable numbers <= " << limit << " = " << total << endl;

    return 0;
}
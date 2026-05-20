#include <bits/stdc++.h>
using namespace std;

const int maxz = 10000000;
vector<bool> isprime(maxz + 1, true);
vector<int> primes;

void sieve()
{
    isprime[0] = isprime[1] = false;
    for (int i = 2; i <= maxz; i++)
    {
        if (isprime[i])
        {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j <= maxz; j += i)
                isprime[j] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        long long ans = 0;

        for (int p : primes)
        {
            if (p > n) break;
            ans += n / p;
        }

        cout << ans << "\n";
    }
}
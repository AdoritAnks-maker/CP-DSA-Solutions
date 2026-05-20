#include <bits/stdc++.h>
using namespace std;

const long long  maxz = 100000;
vector<long long> primes;

void sieve()
{
    vector<bool> isprime(maxz + 1, true);
    isprime[0] = isprime[1] = false;

    for (int i = 2; i * i <= maxz; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= maxz; j += i)
            {
                isprime[j] = false;
            }
        }
    }

    for (int i = 2; i <= maxz; i++)
    {
        if (isprime[i])
            primes.push_back(i);
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

        vector<long long > arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int answer = -1;

        for (long long   p : primes)
        {
            bool ok = false;

            for (int i = 0; i < n; i++)
            {
                if (__gcd(p, arr[i]) == 1)
                {
                    ok = true;
                    break;
                }
            }

            if (ok)
            {
                answer = p;
                break;
            }
        }

        cout << answer << endl ;
    }
}
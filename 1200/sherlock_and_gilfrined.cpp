#include <bits/stdc++.h>
using namespace std;

const int maxz = 200000;
vector<bool> isprime(maxz + 1, true);

void sieve()
{
    isprime[0] = isprime[1] = false;
    for (int i = 2; i <= maxz; i++)
    {
        if (isprime[i])
        {
            for (long long j = 1LL * i * i; j <= maxz; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int n;
    cin >> n;

    if (n > 2)
        cout << 2 << "\n";
    else
        cout << 1 << "\n";

    for (int i = 1; i < n + 1; i++)
    {
        if (!isprime[i])
            cout << 1 << " ";
        else
            cout << 2 << " ";
    }

    cout << "\n";
}
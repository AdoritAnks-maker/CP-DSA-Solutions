#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000; // change according to need
bitset<MAX + 1> isprime;

void sieve()
{
    isprime.set();
    isprime[0] = isprime[1] = 0;

    for (int i = 4; i <= MAX; i += 2)
        isprime[i] = 0;

    for (int i = 3; i * i <= MAX; i += 2)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= MAX; j += 2 * i)
                isprime[j] = 0;
        }
    }
}
bool hasZero(int n)
{
    if (n == 0)
        return true;

    while (n > 0)
    {
        if (n % 10 == 0)
            return true;
        n /= 10;
    }
    return false;
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
        long long N;
        cin >> N;
        long long count = 0;
        for (long long i = 2; i <= N; i++)
        {
            if (isprime[i] && !hasZero(i))
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
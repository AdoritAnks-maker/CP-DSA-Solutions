#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000000;

bitset<MAX + 1> isprime;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

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

    int count = 0;

    for (int i = 2; i <= MAX; i++)
    {
        if (isprime[i])
        {
            count++;

            if (count % 100 == 1)
                cout << i << endl;
        }
    }

    return 0;
}
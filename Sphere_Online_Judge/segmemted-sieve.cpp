#include <bits/stdc++.h>
using namespace std;

vector<char> segmentedSieveNoPreGen(long long L, long long R)
{
    vector<char> isPrime(R - L + 1, true);
    long long lim = sqrt(R);

    for (long long i = 2; i <= lim; ++i)
    {
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
        {
            isPrime[j - L] = false;
        }
    }

    if (L == 1)
        isPrime[0] = false;

    return isPrime;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, m;
        cin >> n >> m;

        vector<char> res = segmentedSieveNoPreGen(n, m);

        for (int i = 0; i < res.size(); i++)
        {
            if (res[i])
                cout << n + i << " ";
        }

        cout << endl;
    }

    return 0;
}
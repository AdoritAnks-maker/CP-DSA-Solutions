#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = res * a;
        }
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i = 0;
        int j = 0;
        long long count = 0;
        while (j < arr.size())
        {

            if (j - i + 1 < k + 1)
            {
                j++;
            }
            else if (j - i + 1 == k + 1)
            {
                for (int i = 0; i <= k; i++)
                {
                    if (binpow(2, i) * arr[i] < (binpow(2, i + 1) * arr[i + 1]))
                    {
                        count++;
                    }
                    i++;
                    j++;
                }
            }
        }
        cout << count << endl;
    }
}
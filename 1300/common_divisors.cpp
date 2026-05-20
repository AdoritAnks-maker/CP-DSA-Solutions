#include <bits/stdc++.h>
using namespace std;

long long number_factors(long long n)
{
    long long  count = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            if (i * i == n)
            {
                count++;
            }
            else
            {
                count += 2;
            }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<long long > arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long  g = 0;
    for (int i = 0; i < n; i++)
    {
        g = __gcd(g, arr[i]);
    }
    long long ans = number_factors(g);
    cout << ans << endl;
}
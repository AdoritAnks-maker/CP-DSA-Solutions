#include <bits/stdc++.h>
using namespace std;

long long numberOfDivisors(long long num)
{
    long long total = 1;
    for (long long i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            int e = 0;
            while (num % i == 0)
            {
                e++;
                num /= i;
            }
            total *= (e + 1);
        }
    }
    if (num > 1)
        total *= 2;

    return total;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long num = __gcd(a, b);
        cout << numberOfDivisors(num) << endl;
    }
    return 0;
}

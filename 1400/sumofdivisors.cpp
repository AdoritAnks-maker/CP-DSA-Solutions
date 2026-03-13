#include <bits/stdc++.h>
using namespace std;

long long sumofdivisors(long long num)
{
    if (num <= 1)
        return 0;
    long long total = 1;
    long long n = num;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            long long sum = 1;
            long long pow = i;
            while (n % i == 0)
            {
                n /= i;
                sum += pow;
                pow *= i;
            }
            total *= sum;
        }
    }
    if (n > 1)
    {
        total *= (1 + n);
    }
    return total - num;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        long long sumofdiv = sumofdivisors(n);
        long long sumofdiv2 = sumofdivisors(sumofdiv);

        string property = "";
        if (sumofdiv == n)
        {
            property += "perfecto ";
        }
        if (sumofdiv != n && sumofdiv2 == n)
        {
            property += "romantico ";
        }
        if (sumofdiv > n)
        {
            property += "abundante ";
        }
        if (property.empty())
        {
            property = "complicado ";
        }
        else
        {
            property.pop_back();
        }
        cout << n << " " << property << endl;
    }
    return 0;
}
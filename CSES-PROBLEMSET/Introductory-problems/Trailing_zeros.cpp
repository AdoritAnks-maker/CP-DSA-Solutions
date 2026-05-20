#include <bits/stdc++.h>
using namespace std;

long long trailing_zeros(long long n)
{
    long long count = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        count += (n / i);
    }
    return count;
}

int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    long long number = trailing_zeros(n);
    cout << number << endl;
}
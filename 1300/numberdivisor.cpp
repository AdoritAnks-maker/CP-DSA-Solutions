#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    long long max_value = a * b * c;
    vector<int> divisors(max_value + 1, 0);
    for (int i = 1; i <= max_value; i++)
    {
        for (int j = i; j <= max_value; j += i)
        {
            divisors[j]++;
        }
    }
    long long sum = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                long long product = i * j * k;
                sum += divisors[product];
            }
        }
    }
    cout << sum << endl;
}
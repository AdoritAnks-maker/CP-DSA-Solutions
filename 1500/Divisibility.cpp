#include <bits/stdc++.h>
using namespace std;

long long floorDiv(long long a, long long b)
{
    if (a >= 0) return a / b;
    return - ((-a + b - 1) / b);
}

int main()
{
    long long k, a, b;
    cin >> k >> a >> b;

    long long count = floorDiv(b, k) - floorDiv(a - 1, k);

    cout << count << endl;
}
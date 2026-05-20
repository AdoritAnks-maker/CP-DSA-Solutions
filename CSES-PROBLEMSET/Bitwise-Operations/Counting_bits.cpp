#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long count = 0;
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        count += __builtin_popcountll(i);
    }
    cout << count << endl;
    return 0;
}
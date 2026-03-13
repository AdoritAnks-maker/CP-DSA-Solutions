#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, x, y;
        cin >> n >> x >> y;
        long long total_sum = n * (n + 1) / 2;
        long long countx = n / x;
        long long county = n / y;
        long long lcnum = (x * y) / __gcd(x, y);
        long long countboth = n / lcnum;
        countx-=countboth;
        county = county - countboth;
        long long first_sum = county * (county + 1) / 2;
        long long num = n - countx;
        long long numsum = num * (num + 1) / 2;
        long long max_sum = total_sum - numsum;
        max_sum = max_sum - first_sum;
        cout << max_sum << endl;
    }
    return 0;
}
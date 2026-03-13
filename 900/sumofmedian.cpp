#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n , k;
        cin >> n >> k;

        long long total = n * k;
        vector<long long> a(total);

        for (long long i = 0; i < total; i++)
        {
            cin >> a[i];
        }
        long long pointer = n* k ;
        long long ans = 0;
        while (k--)
        {
            pointer-= (n / 2 + 1);
            ans += a[pointer];
        }
        cout << ans << endl;
    }
}

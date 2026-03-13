#include <bits/stdc++.h>
using namespace std;

long long const Mod = 1000000007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long mx_count = LLONG_MIN;

        for (int i = 0; i < n; i++)
        {
            long long gq_count = a.end() - upper_bound(a.begin(), a.end(), b[i]);
            mx_count = max(mx_count, gq_count) % Mod;
        }

        cout << mx_count << endl;
    }

    return 0;
}
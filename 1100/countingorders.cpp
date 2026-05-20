#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

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
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        long long result = 1;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            long long temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            long long count = a.size() - temp;

            result = result * max(count - i, 0LL) % MOD;
        }
        cout << result << endl;
    }
}
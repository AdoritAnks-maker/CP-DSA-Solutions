#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        long long max_sum = k * b + n * (k - 1);
        long long min_sum = k * b;
        if (s < min_sum || s > max_sum)
        {
            cout << -1 << endl;
            continue;
        }
        vector<long long> ans(n, 0);
        ans[0] = min_sum;
        s -= min_sum;
        for (int i = 0; i < n; i++)
        {
            int add = min(k - 1, s);
            ans[i] += add;
            s -= add;
        }
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
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
        int n;
        cin >> n;
        vector<long long> arr(n);
        map<long long, long long> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int q;
        cin >> q;
        vector<long long> ans;
        while (q--)
        {
            long long x, y;
            cin >> x >> y;
            long long disc = x * x - 4 * y;
            if (disc < 0)
            {
                ans.push_back(0);
                continue;
            }
            long long squrtdisc = sqrt(disc);
            if (squrtdisc * squrtdisc != disc)
            {
                ans.push_back(0);
                continue;
            }
            long long a = (x + squrtdisc) / 2;
            long long b = (x - squrtdisc) / 2;
            if (a + b != x || a * b != y)
            {
                ans.push_back(0);
                continue;
            }
            if (a == b)
            {
                long long num = 1LL * freq[a] * (freq[a] - 1) / 2;
                ans.push_back(num);
            }
            else
            {
                ans.push_back(1LL * freq[a] * freq[b]);
            }
        }
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
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
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long mn = *min_element(a.begin(), a.end());

        vector<long long> v;
        int cnt = 0;

        for (auto x : a)
        {
            if (x == mn) cnt++;
            if (x % mn == 0) v.push_back(x);
        }
        if (cnt >= 2)
        {
            cout << "Yes\n";
            continue;
        }
        long long g = 0;
        for (auto x : v)
        {
            if (x != mn)
                g = __gcd(g, x);
        }

        if (g == mn)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
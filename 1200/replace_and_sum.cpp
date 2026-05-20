#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        vector<int> ans(n);
        if (n == 1)
        {
            ans[0] = max(a[0], b[0]);
        }
        else
        {
            ans[0] = max({a[0], b[0], a[1]});
            for (int i = 1; i < n - 1; i++)
            {
                ans[i] = max({a[i], b[i], a[i + 1]});
            }
            ans[n - 1] = max(a[n - 1], b[n - 1]);
        }

        vector<long long> pref(n);
        pref[0] = ans[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + ans[i];
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;

            if (l == 0)
                cout << pref[r] << endl ;
            else
                cout << pref[r] - pref[l - 1] << endl ;
        }
    }

    return 0;
}
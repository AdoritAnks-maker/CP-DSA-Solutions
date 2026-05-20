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
        vector<int> a(n), b(n);
        int count_even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                count_even++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (count_even >= 2)
        {
            cout << 0 << endl;
            continue;
        }
        if (count_even == 1)
        {
            int mn = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    mn = min(mn, b[i]);
                }
            }
            cout << mn << endl;
            continue;
        }
        else
        {
            vector<int> ans;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    ans.push_back(b[i]);
                }
            }
            sort(ans.begin(), ans.end());
            cout << ans[0] + ans[1] << endl;
        }
    }
    return 0;
}
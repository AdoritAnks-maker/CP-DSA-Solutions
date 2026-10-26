#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, c;
        cin >> n >> c;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        const int INF = 1e9;
        int cost1 = 0;
        bool ok1 = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                ok1 = false;
                break;
            }
            cost1 += (a[i] - b[i]);
        }

        vector<int> sa = a, sb = b;
        sort(sa.begin(), sa.end());
        sort(sb.begin(), sb.end());

        int cost2 = c;
        bool ok2 = true;
        for (int i = 0; i < n; i++)
        {
            if (sa[i] < sb[i])
            {
                ok2 = false;
                break;
            }
            cost2 += (sa[i] - sb[i]);
        }

        if (!ok1 && !ok2)
            cout << -1 << endl;
        else if (ok1 && ok2)
            cout << min(cost1, cost2) << endl;
        else if (ok1)
            cout << cost1 << endl;
        else
            cout << cost2 << endl;
    }

    return 0;
}
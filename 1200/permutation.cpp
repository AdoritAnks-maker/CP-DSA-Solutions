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

        vector<int> p(n), a(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++)
            pos[p[i]] = i;

        vector<int> uniq;
        uniq.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
                uniq.push_back(a[i]);
        }

        bool ok = true;
        for (int i = 1; i < uniq.size(); i++)
        {
            if (pos[uniq[i]] <= pos[uniq[i - 1]])
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
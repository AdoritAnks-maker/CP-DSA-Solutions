#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<long long> b(n);
        long long neg_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] < 0)
                neg_sum += abs(b[i]);
        }

        long long a1 = LLONG_MAX;
        int idx = -1;

        for (int i = 0; i < n; i++)
        {
            if (b[i] > 0 && b[i] > neg_sum && b[i] < a1)
            {
                a1 = b[i];
                idx = i;
            }
        }

        if (a1 == LLONG_MAX)
        {
            cout << -1 << endl;
            continue;
        }

        vector<long long> neg, pos;

        for (int i = 0; i < n; i++)
        {
            if (i == idx)
                continue;

            if (b[i] < 0)
                neg.push_back(b[i]);
            else
                pos.push_back(b[i]);
        }

        sort(neg.begin(), neg.end());
        sort(pos.begin(), pos.end());

        vector<long long> ans;
        long long cur = a1;
        ans.push_back(cur);

        bool ok = true;

        for (long long x : neg)
        {
            cur += x;
            if (cur <= 0)
            {
                ok = false;
                break;
            }
            ans.push_back(cur);
        }

        if (!ok)
        {
            cout << -1 << endl;
            continue;
        }

        for (long long x : pos)
        {
            cur += x;
            ans.push_back(cur);
        }

        for (long long x : ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
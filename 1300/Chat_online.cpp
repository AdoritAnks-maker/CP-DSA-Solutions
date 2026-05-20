#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int p, q, l, r;
    cin >> p >> q >> l >> r;
    vector<pair<int, int>> arr(p), qrr(q);
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    for (int j = 0; j < q; j++)
    {
        cin >> qrr[j].first >> qrr[j].second;
    }
    int count = 0;
    for (int t = l; t <= r; t++)
    {
        bool ok = false;
        for (auto x : arr)
        {
            for (auto z : qrr)
            {
                int l1 = x.first;
                int l2 = z.first + t;
                int r1 = x.second;
                int r2 = z.second + t;
                if (max(l1, l2) <= min(r1, r2))
                {
                    ok = true;
                    break;
                }
            }
        }
        if (ok)
        {
            count++;
        }
    }
    cout << count << endl;
}
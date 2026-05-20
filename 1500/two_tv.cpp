#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    vector<pair<long long, long long>> events;
    long long mxz = 1000000000;

    for (int i = 0; i < tc; i++)
    {
        long long l, r;
        cin >> l >> r;
        events.push_back({l, +1});
        events.push_back({r + 1, -1});
    }
    sort(events.begin(), events.end());
    long long cnt = 0;
    for (auto &q : events)
    {
        cnt += q.second;

        if (cnt > 2)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
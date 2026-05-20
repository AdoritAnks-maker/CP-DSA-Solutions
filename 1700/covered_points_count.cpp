#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<long long, long long>> events;

    for (int i = 0; i < n; i++)
    {
        long long l, r;
        cin >> l >> r;
        events.push_back({l, +1});
        events.push_back({r + 1, -1});
    }

    sort(events.begin(), events.end());

    map<long long, long long> mpp;

    long long count = 0;
    long long prev = events[0].first;

    for (auto &p : events)
    {
        long long x = p.first;

        if (x > prev)
        {
            mpp[count] += (x - prev);  // ⭐ MAIN LINE
        }

        count += p.second;
        prev = x;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << mpp[i] << " ";
    }

    cout << endl;
    return 0;
}
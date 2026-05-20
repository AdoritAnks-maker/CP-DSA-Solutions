#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<pair<long long, int>> v(n, {0, 0});

    for (int i = 0; i < n; i++)
        cin >> v[i].first;

    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i].first;

    pair<long long, int> globalval = {0, -1};

    for (int it = 1; it <= q; it++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int id;
            long long val;
            cin >> id >> val;
            id--;

            if (v[id].second > globalval.second)
                sum += val - v[id].first;
            else
                sum += val - globalval.first;

            v[id] = {val, it};
        }
        else
        {
            long long val;
            cin >> val;

            globalval = {val, it};
            sum = 1LL * n * val;
        }

        cout << sum << endl;
    }

    return 0;
}
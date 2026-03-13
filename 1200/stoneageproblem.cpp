#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> v(n, {0, 0});
    for (int i = 0; i < q; i++)
    {
        cin >> v[i].first;
    }
    pair<int, int> globalval({0, -1});
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i].first;
    }

    for (int it = 1; it <= q; it++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int id, val;
            cin >> id >> val;
            id--;

            if (v[id].second > globalval.second)
            {
                sum += (val - v[id].first);
            }
            else
            {
                sum += (val - globalval.first);
            }
            v[id].first = val;
            v[id].second = it;
        }
        else
        {
            int val;
            cin >> val;
            globalval.first = val;
            globalval.second = it;

            sum = (long long)n * x;
        }
        cout << sum << endl;
    }
    return 0;
}
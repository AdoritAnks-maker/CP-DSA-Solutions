#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> arr(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> arr[i];
    }

    map<int, vector<int>> mpp;

    for (int i = 0; i < 2 * n; i++)
    {
        mpp[arr[i]].push_back(i + 1);
    }

    vector<pair<int, int>> pairs;

    for (auto &x : mpp)
    {
        vector<int> &v = x.second;

        if (v.size() % 2 != 0)
        {
            cout << -1 << endl;
            return 0;
        }

        for (int i = 0; i < v.size(); i += 2)
        {
            pairs.push_back({v[i], v[i + 1]});
        }
    }

    for (auto z : pairs)
    {
        cout << z.first << " " << z.second << endl;
    }

    return 0;
}
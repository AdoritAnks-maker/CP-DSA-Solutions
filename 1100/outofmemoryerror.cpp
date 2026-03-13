#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, h;
        cin >> n >> m >> h;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long x, y;
        map<long long, long long> add;
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;
            x--;
            add[x] += y;
            if (arr[x] + add[x] > h)
            {
                add.clear();
            }
        }
        for (auto x : add)
        {
            arr[x.first] += x.second;
        }
        for (auto x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int d, t;
    cin >> d >> t;
    vector<pair<int, int>> time(d);
    int min_time = 0;
    int max_time = 0;
    for (int i = 0; i < d; i++)
    {
        cin >> time[i].first >> time[i].second;
        min_time += time[i].first;
        max_time += time[i].second;
    }
    if (t < min_time || t > max_time)
    {
        cout << "NO" << endl;
        return 0;
    }
    vector<int> ans(d);
    for (int i = 0; i < d; i++)
    {
        ans[i] = time[i].first;
    }
    int extra_time = t - min_time;
    for (int i = 0; i < d; i++ && extra_time > 0)
    {
        int can_add = time[i].second - time[i].first;
        int add_value = min(can_add, extra_time);
        ans[i] += add_value;
        extra_time -= add_value;
    }
    cout << "YES" << endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}
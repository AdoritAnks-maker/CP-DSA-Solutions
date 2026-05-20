#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<long long, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    int last_day = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i].second >= last_day)
        {
            last_day = a[i].second;
        }
        else
        {
            last_day = a[i].first;
        }
    }
    cout << last_day << endl;
}
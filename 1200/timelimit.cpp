#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> time(n);
    vector<int> wrong(m);
    for (int i = 0; i < n; i++)
    {
        cin >> time[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> wrong[i];
    }
    int mxx = *max_element(time.begin(), time.end());
    int mn = *min_element(time.begin(), time.end());
    int limit = 2 * mn;
    int mnnn = *min_element(wrong.begin(), wrong.end());
    int ans = max(mxx, limit);
    if (ans < mnnn)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
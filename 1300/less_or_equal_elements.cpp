#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    vector<long long> b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());

    for (auto x : b)
    {
        int cnt = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << cnt << " ";
    }

    cout << endl;
    return 0;
}
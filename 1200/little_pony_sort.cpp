#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 0, idx = -1;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            cnt++;
            idx = i;
        }
    }

    if (cnt == 0)
    {
        cout << 0 << "\n";
    }
    else if (cnt > 1)
    {
        cout << -1 << "\n";
    }
    else
    {
        if (a[n - 1] <= a[0])
        {
            cout << n - (idx + 1) << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}
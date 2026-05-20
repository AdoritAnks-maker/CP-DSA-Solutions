#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, s;
    cin >> m >> s;
    if (s == 0)
    {
        if (m == 1)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
        return 0;
    }
    if (s > 9 * m)
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }

    string mx = "";
    int sum = s;

    for (int i = 0; i < m; i++)
    {
        int digit = min(9, sum);
        mx += char('0' + digit);
        sum -= digit;
    }

    string mn = "";
    sum = s;

    for (int i = 0; i < m; i++)
    {
        int digit = max(0, sum - 9 * (m - i - 1));
        if (i == 0 && digit == 0)
            digit = 1;

        mn += char('0' + digit);
        sum -= digit;
    }

    cout << mn << " " << mx << "\n";
}
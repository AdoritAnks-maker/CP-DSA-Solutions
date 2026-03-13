#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        bool ok = true;

        for (auto x : freq)
        {
            if (x.first != x.second)
            {
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            cout << -1 << "\n";
            continue;
        }

        for (auto x : freq)
        {
            for (int i = 0; i < x.second; i++)
                cout << x.first << " ";
        }

        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string a(n, ' ');
        string b(n, ' ');
        cin >> a >> b;

        vector<int> a1, b1, a2, b2;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                if (i % 2 == 0)
                    a1.push_back(i);
                else
                    b1.push_back(i);
            }

            if (b[i] == '1')
            {
                if (i % 2 == 0)
                    a2.push_back(i);
                else
                    b2.push_back(i);
            }
        }

        if (a1.size() != a2.size() || b1.size() != b2.size())
        {
            cout << -1 << endl;
            continue;
        }

        long long cnt = 0;

        for (int i = 0; i < a1.size(); i++)
            cnt += abs(a1[i] - a2[i]) / 2;

        for (int i = 0; i < b1.size(); i++)
            cnt += abs(b1[i] - b2[i]) / 2;

        cout << cnt << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
        }

        else
        {
            if (k == 1)
            {
                cout << "NO" << endl;
                continue;
            }
            if (n % 2 == 1 && k < 3)
            {
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            vector<int> res;
            if (n % 2 == 0)
            {
                res.push_back(3);
                n -= 3;
            }
            while (n > 0)
            {
                res.push_back(2);
                n -= 2;
            }
            cout << res.size() << endl;
            for (auto x : res)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
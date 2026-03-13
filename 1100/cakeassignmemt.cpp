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
        long long k, x;
        cin >> k >> x;

        long long choc = 1LL << k;
        long long van = 1LL << k;

        vector<int> ops;

        while (choc != x)
        {
            if (choc > x && choc % 2 == 0)
            {
                long long give = choc / 2;
                choc -= give;
                van += give;
                ops.push_back(1);
            }
            else if (van % 2 == 0)
            {
                long long give = van / 2;
                van -= give;
                choc += give;
                ops.push_back(2);
            }
        }

        cout << ops.size() << "\n";
        for (auto v : ops)
            cout << v << " ";
        cout << "\n";
    }

    return 0;
}
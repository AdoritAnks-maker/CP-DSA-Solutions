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

        int m = n * (n - 1) / 2;
        vector<long long> b(m);

        for (long long &i : b)
            cin >> i;

        sort(b.begin(), b.end());

        vector<long long> a;   

        int idx = 0;
        int remaining = n - 1;

        while (remaining > 0)
        {
            a.push_back(b[idx]);
            idx += remaining;
            remaining--;
        }

        a.push_back((long long)1e9);

        for (auto x : a)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}

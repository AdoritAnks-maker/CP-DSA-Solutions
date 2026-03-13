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
        long long n, l, r;
        cin >> n >> l >> r;
        vector<long long> ans(n);
        bool found = true;
        for (int i = 1; i <= n; i++)
        {
            long long k = (l+i-1) / i;
            long long num = k * i;
            if (num >= l && num <= r)
            {
                ans[i-1] = num;
            }
            else
            {
                found = false;
                break;
            }
        }
        if (!found)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
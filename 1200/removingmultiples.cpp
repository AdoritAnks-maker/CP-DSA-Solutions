#include <bits/stdC++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        string s(n, ' ');
        cin >> s;
        vector<bool> ans(n + 1, false);
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '1')
            {
                ans[i] = true;
            }
        }
        long long res = 0;
        vector<long long> cost(n + 1, 0);
        for (int i = n; i >= 1; i--)
        {
            for (int j = i; j <= n; j += i)
            {
                if (ans[j])
                    break;
                cost[j] = i;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (!ans[i])
            {
                res += cost[i];
            }
        }
        cout << res << endl;
    }
}
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
        long long n;
        cin >> n;
        string s(n, ' ');
        cin >> s;
        vector<bool> isremoved(n + 1, false);
        long long res = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (s[j - 1] == '1')
                    break;

                if (isremoved[j])
                {
                    continue;
                }
                else
                {
                    isremoved[j] = true;
                    res += i;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
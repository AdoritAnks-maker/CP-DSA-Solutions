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
        string a, s;
        cin >> a >> s;

        if (a.length() < s.length())
        {
            a = string(s.length() - a.length(), '0') + a;
        }
        string b = "";
        bool ok = true;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            int ai = a[i] - '0';
            if (s[i] < a[i])
            {
                if (i == 0)
                {
                    ok = false;
                    break;
                }
                string res = "";
                res += s[i - 1];
                res += s[i];

                long long num = stoi(res);
                int digit = num - ai;

                if (digit < 0 || digit > 9)
                {
                    ok = false;
                    break;
                }
                b += char('0' + digit);
                i--;
            }
            else
            {
                b += char('0' + s[i] - a[i]);
            }
        }
        if (!ok)
        {
            cout << -1 << endl;
        }
        else
        {
            reverse(b.begin(), b.end());
            cout << b << endl;
        }
    }
    return 0;
}
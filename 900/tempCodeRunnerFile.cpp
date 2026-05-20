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
        int r, g, b;
        cin >> r >> g >> b;
        string ans = "";

        while (r > 0 || g > 0 || b > 0)
        {
            if ((ans.empty() || ans.back() != 'R' && ans[ans.size()-3]!='R') && r > 0)
            {
                ans += 'R';
                r--;
            }
            else if ((ans.empty() || ans.back() != 'G' && ans[ans.size()-3]!='G') && g > 0)
            {
                ans += 'G';
                g--;
            }
            else if ((ans.empty() || ans.back() != 'B' && ans[ans.size()-3]!='B') && b > 0)
            {
                ans += 'B';
                b--;
            }
            else
            {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
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
            int n = ans.size();

            vector<pair<int,char>> v;
            v.push_back({r,'R'});
            v.push_back({g,'G'});
            v.push_back({b,'B'});

            sort(v.rbegin(), v.rend());
            bool added = false;
            for (int i = 0; i < 3; i++)
            {
                int cnt = v[i].first;
                char ch = v[i].second;

                if (cnt == 0) continue;

                if ((n < 1 || ans.back() != ch) &&
                    (n < 3 || ans[n-3] != ch))
                {
                    ans += ch;

                    if (ch == 'R') r--;
                    else if (ch == 'G') g--;
                    else b--;

                    added = true;
                    break;
                }
            }

            if (!added) break;
        }

        cout << ans << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long long x)
{
    long long y = sqrt(x);
    return y * y == x;
}

long long distance_sq(int x1, int x2, int y1, int y2)
{
    long long dx = x2 - x1;
    long long dy = y2 - y1;
    return dx * dx + dy * dy;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> ans;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 && j == 0) continue;

            bool ok = true;
            for (auto p : ans)
            {
                long long d = distance_sq(i, p.first, j, p.second);

                if (isPerfectSquare(d)) 
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                ans.push_back({i, j});
            }
        }
    }

 
    cout << ans.size() << "\n";
    for (auto p : ans)
    {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
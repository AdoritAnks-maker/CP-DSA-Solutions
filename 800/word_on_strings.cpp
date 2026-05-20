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
        vector<vector<char>> v(8, vector<char>(8));
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> v[i][j];
            }
        }
        vector<vector<char>> ans(8, vector<char>(8));
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                ans[i][j] = v[j][i];
            }
        }
        string s = "";
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (ans[i][j] != '.')
                {
                    s += ans[i][j];
                }
            }
        }
        cout << s << endl;
    }
}
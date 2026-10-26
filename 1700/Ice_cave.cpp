#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<char>> grid;

int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

bool dfs(int r, int c, int r2, int c2)
{
    for(int k = 0; k < 4; k++)
    {
        int nr = r + dr[k];
        int nc = c + dc[k];

        if(nr < 0 || nr >= n || nc < 0 || nc >= m)
            continue;

        if(nr == r2 && nc == c2 && grid[nr][nc] == 'X')
        {
            return true;
        }

        if(grid[nr][nc] == '.')
        {
            grid[nr][nc] = 'X';

            if(dfs(nr, nc, r2, c2))
                return true;
        }
    }

    return false;
}

int main()
{
    cin >> n >> m;

    grid.resize(n, vector<char>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int r1, c1, r2, c2;

    cin >> r1 >> c1;
    cin >> r2 >> c2;

    r1--;
    c1--;
    r2--;
    c2--;

    if(dfs(r1, c1, r2, c2))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
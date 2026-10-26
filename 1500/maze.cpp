#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

vector<vector<bool>> visited;

void dfs(vector<vector<char>> &grid, int x, int y)
{
    int n = grid.size();
    int m = grid[0].size();

    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m &&
            !visited[nx][ny] && grid[nx][ny] == '.')
        {
            dfs(grid, nx, ny);
        }
    }
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<char>> grid(n, vector<char>(m));

    visited.assign(n, vector<bool>(m, false));

    int ne = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == '.')
                ne++;
        }
    }

    int ne2 = ne - k;

    bool found = false;
    for (int i = 0; i < n && !found; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.')
            {
                dfs(grid, i, j);
                found = true;
                break;
            }
        }
    }

    return 0;
}
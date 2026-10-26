#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<char>> grid;
vector<vector<bool>> visited;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
bool dfs(int x, int y, int parent_x, int parent_y, char ch)
{
    visited[x][y] = true;
    for (int k = 0; k < 4; k++)
    {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            continue;
        if (grid[nx][ny] != ch)
            continue;
        if (nx == parent_x && ny == parent_y)
            continue;
        if (visited[nx][ny])
        {
            return true;
        }
        if (dfs(nx, ny, x, y, ch))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    cin >> n >> m;
    grid.resize(n, vector<char>(m));
    visited.assign(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j])
            {
                if (dfs(i, j, -1, -1, grid[i][j]))
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
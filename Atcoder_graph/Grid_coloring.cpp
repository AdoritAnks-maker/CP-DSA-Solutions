#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    vector<string> grid(H);

    int white = 0;
    for (int i = 0; i < H; i++)
    {
        cin >> grid[i];
        for (char c : grid[i])
            if (c == '.')
                white++;
    }

    vector<vector<int>> dist(H, vector<int>(W, -1));

    queue<pair<int, int>> q;
    q.push({0, 0});
    dist[0][0] = 0;

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, -1, 0, 1};

    while (!q.empty())
    {
        pair<int, int> curr = q.front();
        q.pop();
        int x = curr.first;
        int y = curr.second;

        for (int k = 0; k < 4; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx >= 0 && nx < H &&
                ny >= 0 && ny < W &&
                grid[nx][ny] == '.' &&
                dist[nx][ny] == -1)
            {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    if (dist[H - 1][W - 1] == -1)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << white - (dist[H - 1][W - 1] + 1) << '\n';
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

int n, m;
vector<vector<bool>> visited;

void dfs(int x, int y, vector<vector<char>>& grid){

    visited[x][y] = true;

    for(int k = 0; k < 4; k++){

        int nx = x + dx[k];
        int ny = y + dy[k];

        if(nx < 0 || nx >= n || ny < 0 || ny >= m)
            continue;

        if(visited[nx][ny])
            continue;

        if(grid[nx][ny] == '-')
            continue;

        if(grid[x][y] == 'B'){
            grid[nx][ny] = 'W';
        }
        else{
            grid[nx][ny] = 'B';
        }

        dfs(nx, ny, grid);
    }
}

int main(){

    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    visited.assign(n, vector<bool>(m, false));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            if(grid[i][j] == '-' || visited[i][j])
                continue;

            grid[i][j] = 'B';

            dfs(i, j, grid);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << grid[i][j];
        }
        cout << "\n";
    }
    return 0;
}
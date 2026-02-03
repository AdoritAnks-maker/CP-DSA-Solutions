#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[11][11];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'W')
                for (int k = 0; k < 4; k++)
                {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && arr[ni][nj] == 'P')
                    {
                        count++;
                        arr[ni][nj] = '.';
                        break;
                    }
                }
        }
    }
    cout << count << endl;
}
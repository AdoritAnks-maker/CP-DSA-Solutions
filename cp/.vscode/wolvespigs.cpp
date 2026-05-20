#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[11][11];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int eaten = 0;
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == 'W')
            {
                for (int k = 0; k < 4; k++)
                {
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if (ni >= 1 && ni <= n && nj >= 1 && nj <= n)
                    {
                        if (arr[ni][nj] == 'P')
                        {
                            eaten++;
                            arr[ni][nj] = '.';
                            break;
                        }
                    }
                }
            }
        }
    }
    cout << eaten << endl;
}
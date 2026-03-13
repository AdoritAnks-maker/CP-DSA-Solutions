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
        int n, m;
        cin >> n >> m;
        vector<vector<long long>> arr(n, vector<long long>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        long long sum = 0;

        for (int j = 0; j < m; j++)
        {
            vector<long long> col(n);

            for (int i = 0; i < n; i++)
            {
                col[i] = arr[i][j];
            }
            sort(col.begin(), col.end());
            long long prefix = 0;
            for (int i = 0; i < col.size(); i++)
            {
                sum += abs(col[i] * i - prefix);
                prefix += col[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}
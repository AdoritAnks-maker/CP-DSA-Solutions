#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, d;
    cin >> n >> m >> d;
    vector<vector<int>> matrix(n, vector<int>(m));
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
            nums.push_back(matrix[i][j]);
        }
    }
    int key = n * m;
    sort(nums.begin(), nums.end());
    int ans = nums[(n * m) / 2];
    int ansss = matrix[0][0] % d;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int res = matrix[i][j] % d;

            if (res != ansss)
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < key; i++)
    {
        count += (abs(nums[i] - ans) / d);
    }
    cout << count << endl;
    return 0;
}

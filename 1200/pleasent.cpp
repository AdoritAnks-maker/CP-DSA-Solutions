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
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int m = 1; arr[i] * m <= 2 * n; m++)
            {
                int j = arr[i] * m - i;

                if (j > i && j <= n && arr[j] == m)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
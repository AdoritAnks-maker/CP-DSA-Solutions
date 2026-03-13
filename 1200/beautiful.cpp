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
        vector<long long> arr(n + 1), pos(n + 1);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            pos[arr[i]] = i;
        }
        int count = 0;
        for (long long i = 1; i < n; i++)
        {
            for (int j = 1; j < 2 * n; j++)
            {

                int x = pos[i];
                int y = pos[j];

                if (x < y && x - y == i * j)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}
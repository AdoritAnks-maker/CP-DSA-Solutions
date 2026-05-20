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
        vector<int> arr(n + 1);
        vector<int> b(n);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        bool found = false;
        for (int i = 1; i <= n; i++)
        {
            if ((arr[i] + i) % m == 0)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
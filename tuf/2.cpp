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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int p;
        cin >> p;
        p--;
        int x = arr[p];
        int ans = 0;
        for (int i = 0; i < p; i++)
        {
            if (arr[i] != x)
            {
                ans++;
                int j = i;
                while (j < p && arr[j] != x)
                {
                    j++;
                }
                i = j - 1;
            }
        }
        for (int i = p+1; i < n; i++)
        {
            if (arr[i] != x)
            {
                ans++;
                int j = i;
                while (j < n && arr[j] != x)
                {
                    j++;
                }
                i = j - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
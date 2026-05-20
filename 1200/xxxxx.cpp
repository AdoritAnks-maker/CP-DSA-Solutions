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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mx_lentt = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += arr[j];
                if (sum % x != 0)
                {
                    mx_lentt = max(mx_lentt, j - i + 1);
                }
            }
        }
        if (mx_lentt == INT_MIN)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << mx_lentt << endl;
        }
    }
    return 0;
}
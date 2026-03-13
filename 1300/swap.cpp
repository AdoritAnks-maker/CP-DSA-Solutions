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
        vector<bool> checked(n + 1, false);
        for (int i = 1; 2 * i <= n; i++)
        {
            if (arr[2 * i] < arr[i])
            {
                swap(arr[i], arr[2 * i]);
            }
        }
        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
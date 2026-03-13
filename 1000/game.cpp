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
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        bool non_decreasing = true;

        for (int i = 0; i + 1 < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                non_decreasing = false;
                break;
            }
        }

        if (non_decreasing)
            cout << n << endl;
        else
            cout << 1 << endl;
    }
}
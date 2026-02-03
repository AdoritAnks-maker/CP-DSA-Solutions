#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> res = arr;         
        reverse(arr.begin(), arr.end());
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = abs(res[i] - arr[i]);
        }

        bool ok = true;
        for (int i = 0; i + 1 < n; i++)
        {
            if (ans[i] != ans[i + 1])
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}

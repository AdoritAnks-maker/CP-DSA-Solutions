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
        {
            cin >> arr[i];
        }
        vector<int> result;
        for (int i = 0; i < n; i++)
        {
            result.push_back(n - arr[i] + 1);
        }
        for (auto x : result)
        {
            cout << x << " ";
        }
        cout << endl ;
    }
    return 0;
}
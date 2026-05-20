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
        long long n, c, k;
        cin >> n >> c >> k;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= c)
            {
                int v = min(arr[i] + k, c);
                c += v;
                k -= (v - arr[i]);
            }
        }
        cout << c << endl;
    }
}
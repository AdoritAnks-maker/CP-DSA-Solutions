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
        vector<long long> arr(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        long long total = (long long)(n * (n + 1) / 2);
        if (arr.back() != total)
        {
            arr.push_back(total);
        }
        vector<long long> diff(arr.size());
        diff[0] = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            diff[i] = arr[i] - arr[i - 1];
        }
        vector<bool> used(n + 1, false);
        vector<long long> extra;
        for (auto x : diff)
        {
            if (x >= 1 && x <= n && !used[x])
            {
                used[x] = true;
            }
            else
            {
                extra.push_back(x);
            }
        }
        long long summissing = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!used[i])
            {
                summissing += i;
            }
        }
        if (extra.size() == 1 && extra[0] == summissing || extra.size() == 0)
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
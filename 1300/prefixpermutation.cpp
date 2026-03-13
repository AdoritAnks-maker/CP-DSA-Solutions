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

        long long sum = 1LL * n * (n + 1) / 2;

        if (arr.back() > sum)
        {
            cout << "NO\n";
            continue;
        }
        else if (arr.back() < sum)
        {
            if (arr.back() + n == sum)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

            continue;
        }

        map<long long, long long> mpp;

        for (int i = 0; i < n - 1; i++)
        {
            mpp[arr[i]]++;
        }
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            long long sum = i * (i + 1) / 2;
            if (mpp.find(sum) != mpp.end())
            {
                continue;
            }
            else
            {
                count++;
            }
        }
        if (count > 2)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            continue;
        }
    }
    return 0;
}
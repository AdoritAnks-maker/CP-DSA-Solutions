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
        vector<long long> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        long long balance = 0;
        set<long long> seen;
        seen.insert(0);
        bool found = false;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
                balance += arr[i];
            else
            {
                balance -= arr[i];
            }
            if (seen.find(balance) != seen.end())
            {
                found = true;
                break;
            }
            seen .insert(balance);
        }
        if (found)
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
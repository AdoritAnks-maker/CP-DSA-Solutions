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
        vector<long long> arr(k);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<long long, int> mpp;
        bool found = false;
        for (int i = k - 1; i > 0; i--)
        {
            long long em = arr[i] - arr[i - 1];
            if (mpp.find(em) != mpp.end())
            {
                found = true;
                break;
            }
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
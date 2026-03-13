#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<long long, int> mpp;
        for (auto x : arr)
        {
            mpp[x]++;
        }
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            long long elm = arr[i] - k;
            if (mpp.find(elm) != mpp.end())
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
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (m--)
    {
        int l, r;
        cin >> l >> r ;
        l--;
        r--;
        map<long long, int> mpp;
        for (int i = l; i <= r; i++)
        {
            mpp[arr[i]]++;
        }
        int count = 0;
        for (auto x : mpp)
        {
            if (x.first == x.second)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
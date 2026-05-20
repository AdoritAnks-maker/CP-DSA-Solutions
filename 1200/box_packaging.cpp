#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<long long, int> mpp;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        mpp[x]++;
    }
    int mx = INT_MIN;
    for (auto x : mpp)
    {
        mx = max(mx, x.second);
    }
    cout << mx << endl;
    return 0;
}
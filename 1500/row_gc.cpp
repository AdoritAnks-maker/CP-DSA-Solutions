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
    long long gcdnum = 0;
    for (int i = 1; i < n; i++)
    {
        gcdnum = __gcd(gcdnum, abs(arr[i] - arr[0]));
    }
    vector<long long> gcdarr;
    long long ans = 0;
    for (int i = 0; i < m; i++)
    {
        long long x;
        cin >> x;
        cout << __gcd(x + arr[0], gcdnum) << " ";
    }
    cout << endl;
}
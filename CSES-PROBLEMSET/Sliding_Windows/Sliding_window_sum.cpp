#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;
    long long x, a, b, c;
    cin >> x >> a >> b >> c;
    vector<long long> arr(n);
    arr[0] = x;
    for (int i = 1; i < n; i++)
    {
        arr[i] = ((a * arr[i - 1]) + b) % c;
    }
    long long sum = 0;
    vector<long long> ans;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    ans.push_back(sum);
    for (int i = k; i < n; i++)
    {
        sum += (arr[i] - arr[i - k]);
        ans.push_back(sum);
    }
    long long xr = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        xr ^= ans[i];
    }
    cout << xr << endl;
}

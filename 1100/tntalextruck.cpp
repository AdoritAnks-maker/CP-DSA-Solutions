#include <bits/stdc++.h>
using namespace std;

long long gcdvector(vector<long long> &nums)
{
    long long g = nums[0];
    for (long long i = 1; i < nums.size(); i++)
    {
        g = __gcd(g, nums[i]);
    }
    return g;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long mx = *max_element(arr.begin(), arr.end());
        long long common = gcdvector(arr);
        long long ans = mx - common;
        cout << ans << endl;
    }
    return 0;
}
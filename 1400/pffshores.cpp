#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;
        vector<long long> nums(n);
        for (long long i = 0; i< n; i++)
        {
            cin >> nums[i];
        }
        vector<long long> result;
        long long total_amount = 0;
        for (long long i = 0; i < n; i++)
        {
            total_amount += (nums[i] / x) * y;
        }
        for (int i = 0; i < n; i++)
        {
            result.push_back(nums[i] + total_amount - ((nums[i] / x) * y));
        }
        long long mx = *max_element(result.begin(), result.end());
        cout << mx << endl;
    }
    return 0;
}
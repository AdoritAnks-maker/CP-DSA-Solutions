#include <bits/stdc++.h>
using namespace std;
long long countpair(vector<long long> &arr, long long x)
{
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    long long count = 0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[left] + arr[right] <= x)
        {
            count += (right - left);
            left++;
        }
        else
        {
            right--;
        }
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        long long l, r;
        cin >> n >> l >> r;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        long long ans = countpair(arr, r) - countpair(arr, l - 1);
        cout << ans << endl;
    }
    return 0;
}
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
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int max_gcd = 0;
        int curr = 0;
        for (int i = 0; i < n-1; i++)
        {
            curr += arr[i];
            int gcdnum = (__gcd(curr, sum - arr[i]));
            max_gcd = max(max_gcd, gcdnum);
        }
        cout << max_gcd << endl;
    }
}
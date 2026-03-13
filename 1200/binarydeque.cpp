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
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> prefsum(n);
        prefsum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefsum[i] = arr[i] + prefsum[i - 1];
        }
        int left = 0;
        int end = n - 1;
        long long sum = 0;
        int mx_lett = -1;
        for (int right = 0; right < n; right++)
        {
            sum += arr[right];

            while (sum > s)
            {
                sum -= arr[left];
                left++;
            }
            if (sum == s)
            {
                mx_lett = max(mx_lett, right - left + 1);
            }
        }
        if (mx_lett == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n - mx_lett << endl;
        }
        }
    return 0;
}
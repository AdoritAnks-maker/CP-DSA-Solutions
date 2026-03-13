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
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int prev = arr[0];
        long long current_max = arr[0];
        long long sum = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] * prev > 0)
            {
                current_max = max(current_max, arr[i]);
            }
            else
            {
                sum += current_max;
                prev = arr[i];
                current_max = arr[i];
            }
        }
        sum += current_max;
        cout << sum << endl;
    }
}
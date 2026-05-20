#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<long long> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    while (m--)
    {
        long long k, x;
        cin >> k >> x;
        arr[k] = x;


        long long current_sum = arr[1];
        long long max_sum = arr[1];

        for (int i = 2; i <= n; i++) 
        {
            current_sum = max(arr[i], current_sum + arr[i]);
            max_sum = max(max_sum, current_sum);
        }

        cout << max_sum << "\n";
    }
}
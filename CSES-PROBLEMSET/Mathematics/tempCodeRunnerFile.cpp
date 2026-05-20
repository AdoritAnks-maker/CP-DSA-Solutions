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
        vector<long long> arr(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                long long right = __gcd(arr[0], arr[1]);
                if (right < arr[0])
                {
                    count++;
                }
            }
            else if (i == n - 1)
            {
                long long left = __gcd(arr[n - 2], arr[n - 1]);
                if (left < arr[n - 1])
                {
                    count++;
                }
            }
            else
            {
                long long left = __gcd(arr[i - 1], arr[i]);
                long long right = __gcd(arr[i], arr[i + 1]);
                if (left == right && left < arr[i])
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
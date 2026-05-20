#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long count = 0;
        long long l = arr[0] - x;
        long long r = arr[0] + x;
        for (int i = 1; i < n; i++)
        {
            long long newl = max(l, arr[i] - x);
            long long new_r = min(r, arr[i] + x);
            if (newl <= new_r)
            {
                l = newl;
                r = new_r;
            }
            else
            {
                count++;
                l = arr[i] - x;
                r = arr[i] + x;
            }
        }
        cout << count << endl;
    }
}
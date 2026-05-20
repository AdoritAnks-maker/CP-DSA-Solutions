#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, h;
        cin >> n >> m >> h;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<long long> res = arr;
        long long b = 0;
        long long c = 0;
        while (m--)
        {
            cin >> b >> c;
            arr[b] = arr[b] + h;
            bool invalid = false;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > c)
                {
                    invalid = true;
                    break;
                }
            }
            if (invalid)
            {
                arr = res;
            }
            else
            {
                res = arr;
            }
        }
        for (auto x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
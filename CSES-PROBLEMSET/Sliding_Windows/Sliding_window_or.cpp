#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    long long x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<long long> arr(n);
    arr[0] = x;

    for (int i = 1; i < n; i++)
    {
        arr[i] = ((a * arr[i - 1]) + b) % c;
    }

    long long i = 0, j = 0;
    long long ans = 0;
    long long wor = 0;

    while (j < n)
    {
        wor |= arr[j];

        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            ans |= wor;

            
            i++;
            j = i;
            wor = 0;
        }
    }

    cout << ans << endl;
}
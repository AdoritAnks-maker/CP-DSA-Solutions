#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> arr(n + 1);
    for (long long i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector<long long> l(m + 1), r(m + 1), d(m + 1);
    for (long long i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }
    vector<long long> freq(m + 2);
    while (k--)
    {
        long long x, y;
        cin >> x >> y;
        freq[x] += 1;
        freq[y + 1] -= 1;
    }
    for (int i = 1; i <= m; i++)
    {
        freq[i] += freq[i - 1];
    }
    vector<long long> extra(100001);
    for (int i = 1; i <= m; i++)
    {
        extra[l[i]] += (d[i] * freq[i]);
        extra[r[i] + 1] -= (d[i] * freq[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        extra[i] += extra[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i] += extra[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
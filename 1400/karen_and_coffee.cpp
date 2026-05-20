#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;

    const int MAX = 200000;

    vector<int> freq(MAX + 2, 0);

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        freq[l]++;
        freq[r + 1]--;
    }

    for (int i = 1; i <= MAX; i++)
    {
        freq[i] += freq[i - 1];
    }

    vector<int> good(MAX + 2, 0);

    for (int i = 1; i <= MAX; i++)
    {
        if (freq[i] >= k)
            good[i] = 1;
    }

    for (int i = 1; i <= MAX; i++)
    {
        good[i] += good[i - 1];
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << good[b] - good[a - 1] << '\n';
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<long long> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector<long long> prefsum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        prefsum[i] = arr[i] + prefsum[i - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << prefsum[r] - prefsum[l - 1] << endl;
    }
    return 0;
}
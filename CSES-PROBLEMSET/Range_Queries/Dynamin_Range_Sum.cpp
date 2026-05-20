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
        cin >> arr[i];

    vector<long long> pref(n + 1, 0);

    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + arr[i];

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int k;
            long long u;
            cin >> k >> u;
            long long diff = u - arr[k];
            arr[k] = u;
            for (int i = k; i <= n; i++)
                pref[i] += diff;
        }
        else
        {
            int a, b;
            cin >> a >> b;

            cout << pref[b] - pref[a - 1] << endl ;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        vector<int> prefix_sum(n);
        prefix_sum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefix_sum[i] = arr[i] + prefix_sum[i - 1];
        }
        while (q--)
        {
            int x;
            cin >> x;
            int idx = -1;
            if (prefix_sum.back() < x)
            {
                cout << -1 << endl;
            }
            else
            {
                int idx = lower_bound(prefix_sum.begin(), prefix_sum.end(), x) - prefix_sum.begin() + 1;
                cout << idx << endl;
            }
        }
    }
    return 0;
}

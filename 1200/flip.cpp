#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    int ones = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1) ones++;
    }
    int max_gain = -1e9, curr = 0;

    for (int i = 0; i < n; i++)
    {
        int val = (a[i] == 0 ? 1 : -1);
        curr = max(val, curr + val);
        max_gain = max(max_gain, curr);
    }


    if (max_gain < 0)
        cout << ones - 1 << '\n';
    else
        cout << ones + max_gain << '\n';

    return 0;
}

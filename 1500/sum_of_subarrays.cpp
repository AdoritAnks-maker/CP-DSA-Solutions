#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, int k)
{
    if (n == 0)
        return {};

    vector<int> a;

    if (k < n)
    {
        a.assign(n, -1);
        if (k > 0)
            a[k - 1] = 200;
        a[k] = -400;
    }
    else
    {
        a = solve(n - 1, k - n);
        a.push_back(1000);
    }

    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> b = solve(n, k);

        for (int x : b)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
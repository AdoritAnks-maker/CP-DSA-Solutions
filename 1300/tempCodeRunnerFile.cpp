#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return (a * b) / __gcd(a, b);
}

long long lcmnum(vector<long long> &arr)
{
    int n = arr.size();
    long long lcmn = arr[0];

    for (int i = 1; i < n; i++)
    {
        lcmn = lcm(lcmn, arr[i]);
    }

    return lcmn;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << lcmnum(arr) << endl;
    }

    return 0;
}
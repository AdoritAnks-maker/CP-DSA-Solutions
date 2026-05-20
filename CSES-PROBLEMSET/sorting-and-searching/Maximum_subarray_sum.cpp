#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long mx_sum = LLONG_MIN;
    long long currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        mx_sum = max(mx_sum, currsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    cout << mx_sum << endl;
}
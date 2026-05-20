#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = LLONG_MIN;
    long long sum = 0;
    int i = 0;
    int j = 0;
    while (j < arr.size())
    {
        sum += arr[j];

        if (j - i + 1 < a)
        {
            j++;
        }
        while (j - i + 1 > b)
        {
            sum -= arr[i];
            i++;
        }
        if (j - i + 1 > a && j - i + 1 < b)
        {
            ans = max(ans, sum);
            i++;
            j++;
        }
        cout << ans << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> arr(n);
    long long mx_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx_val = max(mx_val, arr[i]);
    }
    vector<long long> freq(mx_val + 1, 0);
    for (auto x : arr)
    {
        freq[x]++;
    }
    for (int g = mx_val; g >= 1; g--)
    {
        int count = 0;
        for (int j = g; j <= mx_val; j += g)
        {
            count += freq[j];
        }
        if (count >= 2)
        {
            cout << g << endl;
            return 0;
        }
    }
    return 0;
}
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
    vector<long long> pref_max(n);
    pref_max[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pref_max[i] = max(pref_max[i - 1], arr[i]);
    }
    long long moves = 0;
    for (int i = 0; i < n; i++)
    {
        moves += (pref_max[i] - arr[i]);
    }
    cout << moves << endl;
    return 0;
}
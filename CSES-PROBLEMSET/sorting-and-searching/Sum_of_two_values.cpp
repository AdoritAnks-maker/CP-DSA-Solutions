#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, x;
    cin >> n >> x;
    vector<pair<long long, long long>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        long long sum = arr[left].first + arr[right].first;
        if (sum == x)
        {
            cout << arr[left].second << " " << arr[right].second;
            return 0;
        }
        else if (sum < x)
            left++;
        else
        {
            right--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}
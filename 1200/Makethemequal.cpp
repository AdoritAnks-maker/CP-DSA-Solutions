#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    arr.resize(unique(arr.begin(), arr.end()) - arr.begin());
    if (arr.size() > 3)
    {
        cout << -1 << endl;
        return 0;
    }
    if (arr.size() == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    if (arr.size() == 2)
    {
        if ((arr[1] - arr[0]) % 2 == 0)
        {
            cout << (arr[1] - arr[0]) / 2 << endl;
            return 0;
        }
        else
        {
            cout << arr[1] - arr[0] << endl;
            return 0;
        }
    }
    else
    {
        if (arr[1] - arr[0] != arr[2] - arr[1])
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            cout << arr[1] - arr[0] << endl;
            return 0;
        }
    }
    return 0;
}
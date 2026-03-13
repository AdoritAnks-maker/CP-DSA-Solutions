#include <bits/stdC++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int count = 0;
    for (int i = 1; i <= k; i++)
    {
        if (arr[i - 1] == arr[i])
        {
            count++;
        }
    }
    if (k == 0)
    {
        if (arr[0] == 1)
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            cout << 1 << endl;
            return 0;
        }
    }
    if (k < n && arr[k - 1] == arr[k])
    {
        cout << -1 << endl;
    }
    else
    {
        cout << arr[k - 1] << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    vector<int> arr(tc);
    for (int i = 0; i < tc; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    vector<int> original = arr;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < tc; i++)
    {
        if (arr[i] != original[i])
        {
            count++;
        }
    }
    if (count > 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}
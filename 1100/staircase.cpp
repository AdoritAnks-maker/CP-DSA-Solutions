#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    vector<long long> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    if (m == 0)
    {
        cout << "YES" << endl;
        return 0;
    }
    int count = 1;
    bool found = true;
    if (arr[m - 1] == n || m==1 && arr[0]==1 || arr[0]==1)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 1; i < m; i++)
    {
        if (arr[i] == arr[i - 1] + 1)
        {
            count++;
            if (count > 2)
            {
                found = false;
                break;
            }
        }
        else
        {
            count = 1;
        }
    }
    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
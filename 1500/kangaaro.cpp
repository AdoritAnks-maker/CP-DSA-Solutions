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
    int count = 0;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        int start = i + 1;
        int end = n - 1;
        int pos = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] >= 2 * arr[i])
            {
                pos = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        if (pos != -1 && pos < n && arr[pos] >= 2 * arr[i])
        {
            visited[i] = true;
            visited[pos] = true;
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
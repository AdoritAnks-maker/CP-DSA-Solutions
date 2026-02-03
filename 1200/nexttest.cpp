#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int next_idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            next_idx = i + 1;
            break;
        }else{
            next_idx=n+1;
        }
    }
    cout << next_idx << endl;
}
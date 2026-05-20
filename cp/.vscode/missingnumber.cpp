#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n-1);
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }
    int num = -1;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            num = i+1;
            break;
        }
    }
    cout << num << endl;
}
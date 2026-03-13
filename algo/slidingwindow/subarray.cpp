#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n , size;
        cin >>  n >> size;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> sums;
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        sums.push_back(sum);
        for (int i = size; i < n; i++)
        {
            sum += arr[i] - (arr[i - size]);
            sums.push_back(sum);
        }
        for (auto x : sums)
        {
            cout << x << " ";
        }
    }
    return 0;
}
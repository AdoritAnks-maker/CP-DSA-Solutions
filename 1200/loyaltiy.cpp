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
        long long n, x;
        cin >> n >> x;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long left = 0;
        long long right = n - 1;
        long long s = 0;
        vector<long long> bonus;
        long long point = 0;
        sort(arr.begin() ,arr.end());
        while (left <= right)
        {
            if ((s + arr[right]) / x > s / x)
            {
                point += arr[right];
                s += arr[right];
                bonus.push_back(arr[right]);
                right--;
            }
            else
            {
                s += arr[left];
                bonus.push_back(arr[left]);
                left++;
            }
        }
        cout << point << endl;
        for (auto x : bonus)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
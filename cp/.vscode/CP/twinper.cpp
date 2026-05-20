#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> nums(n);
        int conss = n + 1;
        for (int i = 0; i < n; i++)
        {
            nums[i] = conss - a[i];
        }
        for (auto x : nums)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
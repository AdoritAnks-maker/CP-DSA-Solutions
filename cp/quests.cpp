#include <bits/stdc++.h>
using namespace std;

int gcdnum(int a, int b)
{
    if (b == 0)
        return a;
    return gcdnum(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max_sum = INT_MIN;
        bool found = false;
        for (int left = 0; left < n; left++)
        {
            for (int right = left; right < n; right++)
            {
                if (gcdnum(arr[left], arr[right]) == 1)
                {
                    found = true;
                    max_sum = max(max_sum, left + right + 2);
                }
            }
        }
        if (!found)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << max_sum << endl;
        }
    }
}
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
        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mpp[arr[i]] = i + 1;
        }
        vector<int> keys;
        for (auto &p : mpp)
        {
            keys.push_back(p.first);
        }
        int max_sum = -1;
        for (int i = 0; i < keys.size(); i++)
        {
            for (int j = i; j < keys.size(); j++)
            {
                int a = keys[i];
                int b = keys[j];
                if (gcdnum(a, b) == 1)
                {
                    int sum_indices = mpp[a] + mpp[b];
                    max_sum = max(max_sum, sum_indices);
                }
            }
        }
        cout << max_sum << endl;
    }
}
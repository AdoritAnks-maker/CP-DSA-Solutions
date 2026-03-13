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
    map<int, int> freq;
    for (auto x : arr)
    {
        freq[x]++;
    }
    bool found = false;
    vector<vector<int>> result;
    while (freq[1] > 0)
    {
        if (freq[2] > 0 && freq[4] > 0)
        {
            result.push_back({1, 2, 4});
            freq[1]--;
            freq[2]--;
            freq[4]--;
        }
        else if (freq[2] > 0 && freq[6] > 0)
        {
            result.push_back({1, 2, 6});
            freq[1]--;
            freq[2]--;
            freq[6]--;
        }
        else if (freq[3] > 0 && freq[6] > 0)
        {
            result.push_back({1, 3, 6});
            freq[1]--;
            freq[3]--;
            freq[6]--;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    if ((int)result.size() * 3 != n)
    {
        cout << -1 << endl;
        return  0;
    }
    for (auto &v : result)
    {
        cout << v[0] << " " << v[1] << " " << v[2] << endl;
    }
    return 0;
}
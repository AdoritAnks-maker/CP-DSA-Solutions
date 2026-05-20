#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    multiset<long long> window;
    vector<long long> ans;
    int i = 0;
    int j = 0;
    while (j < arr.size())
    {
        window.insert(arr[j]);
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            auto mid = next(window.begin(), k / 2);
            if (k % 2 == 0)
            {
                auto mid2 = prev(mid);
                long long num = min(*mid, *mid2);
                ans.push_back(num);
            }
            else
            {
                ans.push_back(*mid);
            }
            window.erase(window.find(arr[i]));
            i++;
            j++;
        }
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
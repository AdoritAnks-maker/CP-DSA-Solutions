#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> arr(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    map<long long, int> freq;
    for (auto x : arr)
    {
        freq[x]++;
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]--;
        long long newsum = sum - arr[i];
        long long targetsum = newsum / 2;
        if (newsum % 2 == 0)
            if (freq[targetsum] > 0)
            {
                ans.push_back(i + 1);
            }
        freq[arr[i]]++;
    }
    cout << ans.size() << endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}
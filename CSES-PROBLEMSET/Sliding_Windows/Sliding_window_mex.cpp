#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<long long> missing;
    for (long long i = 0; i <= n; i++)
    {
        missing.insert(i);
    }

    vector<long long> freq(n + 1, 0);

    for (int i = 0; i < k; i++)
    {
        if (arr[i] <= n)
        {
            freq[arr[i]]++;
            if (freq[arr[i]] == 1)
            {
                missing.erase(arr[i]);
            }
        }
    }

    vector<long long> ans;
    ans.push_back(*missing.begin());

    for (long long i = k; i < n; i++)
    {
        long long out = arr[i - k];

        if (out <= n)
        {
            freq[out]--;
            if (freq[out] == 0)
            {
                missing.insert(out);
            }
        }

        long long in = arr[i];

        if (in <= n)
        {
            freq[in]++;
            if (freq[in] == 1)
            {
                missing.erase(in);
            }
        }

        ans.push_back(*missing.begin());
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
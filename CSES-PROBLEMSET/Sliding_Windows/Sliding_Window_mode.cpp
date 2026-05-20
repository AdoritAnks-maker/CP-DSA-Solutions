#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long i = 0;
    long long j = 0;
    map<long long, int> mpp;
    long long count = 0;
    vector<long long> ans;
    while (j < arr.size())
    {
        mpp[arr[j]]++;
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            long long num = 0;
            long long mx_freq = INT_MIN;
            for (auto x : mpp)
            {
                if (x.second > mx_freq)
                {
                    mx_freq = x.second;
                    num = x.first;
                }
            }
            ans.push_back(num);

            mpp[arr[i]]--;
            if (mpp[arr[i]] == 0)
            {
                mpp.erase(arr[i]);
            }
            i++;
            j++;
        }
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}
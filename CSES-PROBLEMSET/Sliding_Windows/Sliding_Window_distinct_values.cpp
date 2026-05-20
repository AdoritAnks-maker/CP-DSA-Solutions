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
    vector<long long> ans;
    long long count = 0;
    while (j < arr.size())
    {
        if (mpp[arr[j]] == 0)
        {
            count++;
        }
        mpp[arr[j]]++;
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            ans.push_back(count);

            mpp[arr[i]]--;
            if (mpp[arr[i]] == 0)
            {
                count--;
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
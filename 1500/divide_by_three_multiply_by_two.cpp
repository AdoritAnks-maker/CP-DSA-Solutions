#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n);
    map<long long, int> mpp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    long long start;

    // find starting element
    for (auto x : arr)
    {
        if (x % 3 != 0 || mpp.find(x / 3) != mpp.end())
        {
            start = x;
            break;
        }
    }

    vector<long long> ans;
    ans.push_back(start);

    for (int i = 1; i < n; i++)
    {
        long long last = ans.back();

        if (last % 3 == 0 && mpp.find(last / 3) != mpp.end())
        {
            ans.push_back(last / 3);
        }
        else
        {
            if (mpp.find(last * 2) != mpp.end())
            {
                ans.push_back(last * 2);
            }
            else
            {
                if (mpp.find(last / 3) != mpp.end())
                {
                    ans.push_back(last / 3);
                }
                else
                {
                    if (mpp.find(last * 2) != mpp.end())
                    {
                        ans.push_back(last * 2);
                    }
                }
            }
        }
    }

    for (auto x : ans)
        cout << x << " ";

    cout << endl;
}
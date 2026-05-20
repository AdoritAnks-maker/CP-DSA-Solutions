#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<long long, long long> mpp;
    long long sum = 0;
    long long count = 0;
    mpp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        long long mod = ((sum % n) + n) % n;
        if (mpp.find(mod) != mpp.end())
        {
            count += mpp[mod];
        }
        mpp[mod]++;
    }
    cout << count << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, x;
    cin >> n >> x;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<long long, long long> mpp;
    mpp[0] = 1;
    long long sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (mpp.find(sum - x) != mpp.end())
        {
            count += mpp[sum - x];
        }
        mpp[sum]++;
    }
    cout << count << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr = {9, -3, 3, -1, 6, -5};
    int n = arr.size();
    map<int, int> mpp;
    int sum = 0;
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (mpp.find(sum) != mpp.end())
        {
            maxlen = max(maxlen, i - mpp[sum]);
        }
        else if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }
    cout << maxlen << endl ;
}
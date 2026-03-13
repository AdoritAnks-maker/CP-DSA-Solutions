#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, x, y;
        cin >> n >> x >> y;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<pair<long long, long long>, long long> mpp;
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            long long r1 = arr[i] % x;
            long long r2 = arr[i] % y;
            long long need_x = (x - r1)%x;
            long long need_y = r2%y;
            if (mpp.find({need_x, need_y}) != mpp.end())
            {
                count += mpp[{need_x, need_y}];
            }
            mpp[{r1, r2}]++;
        }
        cout << count << endl;
    }
    return 0;
}
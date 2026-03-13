#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long long count = 0;
        bool ok = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] + arr[i]==7|| arr[i - 1] ==arr[i])
            {
                if (ok == 0)
                {
                    count++;
                    ok = 1;
                }
                else
                {
                    ok = 0;
                }
                ok = 0;
                i++;
            }
            ok = 0;
        }
        cout << count << endl;
    }
}
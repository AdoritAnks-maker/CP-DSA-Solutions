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
        long long mx = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            mx = max(mx, arr[i]);
        }
        if (sum % 2 == 0 && mx <= sum - mx)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    return 0;
}
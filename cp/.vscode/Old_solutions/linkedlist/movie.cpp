    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        long long n, x;
        cin >> n >> x;
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first >> arr[i].second;
        }
        int ans = arr[0].second - arr[0].first + 1;
        ans += (arr[0].first - 1) % x;
        for (int i = 1; i < n; i++)
        {
            int prev = arr[i].first - (arr[i - 1].second + 1);
            if (prev % x != 0)
            {
                ans += prev;
            }
            ans += arr[i].second - arr[i].first + 1;
        }
        cout << ans << endl;
    }
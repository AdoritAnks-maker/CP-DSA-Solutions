#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {

        int n;
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<long long> prefsum(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            prefsum[i] = prefsum[i - 1] + arr[i - 1];
        }

        vector<int> useful;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) useful.push_back(i);
        }

        long long ans = 0;

        for (auto x : useful) {

            long long mx_sum = LLONG_MIN;
            long long mn_sum = LLONG_MAX;

            for (int j = 0; j + x <= n; j += x) {

                long long seg_sum = prefsum[j + x] - prefsum[j];

                mx_sum = max(mx_sum, seg_sum);
                mn_sum = min(mn_sum, seg_sum);
            }

            ans = max(ans, mx_sum - mn_sum);
        }

        cout << ans << endl;
    }
}
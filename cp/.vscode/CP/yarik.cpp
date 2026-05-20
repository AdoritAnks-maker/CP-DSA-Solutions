#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans = a[0];
        long long curr = a[0];

        for (int i = 1; i < n; i++) {
            if ( (a[i] & 1) != (a[i - 1] & 1) ) {
                curr = max(a[i], curr + a[i]);
            } else {
                curr = a[i];
            }
            ans = max(ans, curr);
        }

        cout << ans << "\n";
    }
}

#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int maxScore = 100 * n;
    vector<bool> dp(maxScore + 1, false);
    dp[0] = true;

    for (int i = 0; i < n; i++) {
        int step = 100 / a[i];
        // problem i adds multiples of step, from 0 to a[i]*step (=100)
        // this is a bounded knapsack with item=step, count=a[i]
        // use sliding window or just iterate
        vector<bool> ndp(maxScore + 1, false);
        for (int s = 0; s <= maxScore; s++) {
            if (!dp[s]) continue;
            for (int x = 0; x <= a[i] && s + x * step <= maxScore; x++) {
                ndp[s + x * step] = true;
            }
        }
        dp = ndp;
    }

    bool ok = true;
    for (int k = 0; k <= maxScore; k++)
        if (!dp[k]) { ok = false; break; }

    cout << (ok ? "Yes" : "No") << "\n";
}

int main() {
    fast;
    int t; cin >> t;
    while (t--) solve();
}
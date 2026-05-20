#include <bits/stdc++.h>
using namespace std;

bool canFill(vector<int>& a, int h, long long x) {
    long long water = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < h) {
            water += (h - a[i]);
        }
    }
    return water <= x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int low = 1;
        int high = 1e6 + 100; // A value higher than any possible coral height
        int ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (canFill(a, mid, x)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int minVal = 2e9, maxVal = -2e9;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        minVal = min(minVal, a[i]);
        maxVal = max(maxVal, a[i]);
    }

    bool sorted = true;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i+1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "-1\n";
        return;
    }

    vector<int> sortedA = a;
    sort(sortedA.begin(), sortedA.end());

    int left = 1, right = 1e9, answer = 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long low = (long long)minVal + mid;
        long long high = (long long)maxVal - mid;

        bool ok = true;
        if (high < low) {
            for (int i = 0; i < n; ++i) {
                if (a[i] > high && a[i] < low && a[i] != sortedA[i]) {
                    ok = false;
                    break;
                }
            }
        }

        if (ok) {
            answer = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << answer << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}

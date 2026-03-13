#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long ans = (( (y + 1) * k - 1 + x - 2 ) / (x - 1)) + k;
        cout << ans << "\n";
    }

    return 0;
}
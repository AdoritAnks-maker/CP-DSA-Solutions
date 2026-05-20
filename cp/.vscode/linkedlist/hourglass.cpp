#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        // number of flips before or at m
        long long flips = m / k;

        // time since last flip
        long long time_since_last_flip = m - flips * k;

        // remaining sand
        long long remaining = max(0LL, s - time_since_last_flip);

        cout << remaining << "\n";
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long total;
        if (n % 2 == 0)
            total = (n / 2) * (n + 1);
        else
            total = ((n + 1) / 2) * n;

        long long powerSum = 0;
        for (long long p = 1; p <= n; p <<= 1) {
            powerSum += p;
        }

        cout << total - 2 * powerSum << "\n";
    }
}

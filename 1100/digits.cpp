#include <bits/stdc++.h>
using namespace std;

long long fact(long long x) {
    long long res = 1;
    for (int i = 2; i <= x; i++) res *= i;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        n = min(n, 7LL);
        long long f = fact(n);

        int digits = to_string(k).size();

        for (int i = 1; i < 10; i += 2) {
            long long mod = 0;

            // simulate: num = k repeated f times
            for (int j = 0; j < f; j++) {
                // shift previous number left by digits of k
                for (int d = 0; d < digits; d++) {
                    mod = (mod * 10) % i;
                }
                mod = (mod + k) % i;
            }

            if (mod == 0) {
                cout << i << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long ans = 1;

    for (long long i = 1; i * i <= x; i++) {
        if (x % i == 0 && __gcd(i, x / i) == 1) {
            ans = i;
        }
    }

    cout << ans << " " << x / ans << '\n';

    return 0;
}
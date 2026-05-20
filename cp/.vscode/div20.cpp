#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b; // divide first to avoid overflow
}

int main() {
    long long ans = 1;
    for (int i = 1; i <= 20; i++) {
        ans = lcm(ans, i);
    }
    cout << ans << endl; // Output: 2520
    return 0;
}

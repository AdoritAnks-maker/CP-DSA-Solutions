#include <bits/stdc++.h>
using namespace std;

int main() {
    long long y, k, n;
    cin >> y >> k >> n;

    long long first = ((y / k) + 1) * k;  
    if (first > n) {
        cout << -1 << endl;
        return 0;
    }

    bool printed = false;
    for (long long m = first; m <= n; m += k) {
        long long x = m - y;  
        cout << x << " ";
        printed = true;
    }

    if (!printed) {
        cout << -1 << endl;
    }

    return 0;
}
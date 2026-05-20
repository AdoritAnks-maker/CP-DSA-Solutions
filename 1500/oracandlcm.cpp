#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n < 2) {
        cout << 0 << endl;
        return 0;
    }


    vector<long long> suff(n);
    suff[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        suff[i] = __gcd(arr[i], suff[i+1]);
    }

    long long ans = 0;
    for (int i = 0; i < n-1; i++) {
        long long val = lcm(arr[i], suff[i+1]);
        ans = __gcd(ans, val);
    }
    cout << ans << endl;
}
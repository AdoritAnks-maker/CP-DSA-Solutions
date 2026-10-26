#include <bits/stdc++.h>
using namespace std;

#define int long long
const int mod = 998244353;

int solve(string &s, int idx, bool tight, bool lz, int mask, int k) {
    if (__builtin_popcount(mask) > k) return 0;

    if (idx == s.size()) {
        return 1;
    }

    int lb = 0;
    int ub = tight ? s[idx] - '0' : 9;
    int res = 0;

    for (int dig = lb; dig <= ub; dig++) {
        bool ntight = tight && (dig == s[idx] - '0');

        if (lz && dig == 0) {
            res = (res + solve(s, idx + 1, ntight, 1, mask, k)) % mod;
        } else {
            int nmask = mask | (1LL << dig);

            if (__builtin_popcount(nmask) <= k) {
                res = (res + solve(s, idx + 1, ntight, 0, nmask, k)) % mod;
            }
        }
    }

    return res;
}

int func(long long num, int k) {
    string s = to_string(num);
    return solve(s, 0, 1, 1, 0, k);
}

signed main() {
    long long l, r;
    int k;
    cin >> l >> r >> k;

    int ans = (func(r, k) - func(l - 1, k) + mod) % mod;
    cout << ans << '\n';
}
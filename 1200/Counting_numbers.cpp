#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll dp[2][11][20][2];

ll dp_func(string &s, bool tight, ll prev, ll idx, bool lz) {
    if (idx == s.size()) return 1;

    if (dp[tight][prev][idx][lz] != -1) {
        return dp[tight][prev][idx][lz];
    }

    ll lb = 0;
    ll res = 0;
    ll up = tight ? s[idx] - '0' : 9;

    for (int d = lb; d <= up; d++) {
        if (d == prev && !lz) continue;

        res += dp_func(
            s,
            (tight && d == up),
            d,
            idx + 1,
            (lz && d == 0)
        );
    }

    return dp[tight][prev][idx][lz] = res;
}

ll solve(long long a, long long b) {
    string l = to_string(a - 1);
    string r = to_string(b);

    memset(dp, -1, sizeof(dp));
    ll ans_l = dp_func(l, 1, 10, 0, 1);

    memset(dp, -1, sizeof(dp));
    ll ans_r = dp_func(r, 1, 10, 0, 1);

    return ans_r - ans_l;
}

int main() {
    long long a, b;
    cin >> a >> b;

    cout << solve(a, b) << '\n';
}

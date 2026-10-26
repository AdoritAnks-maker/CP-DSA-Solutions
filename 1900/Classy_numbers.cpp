#include <bits/stdc++.h>
using namespace std;

long long dp[20][2][2][4];

long long solve(string &s, int idx, bool tight, bool lz, int cnt) {
    if (cnt > 3)
        return 0;

    if (idx == (int)s.size())
        return 1;

    if (dp[idx][tight][lz][cnt] != -1)
        return dp[idx][tight][lz][cnt];

    int ub = tight ? s[idx] - '0' : 9;
    long long res = 0;

    for (int dig = 0; dig <= ub; dig++) {
        if (lz && dig == 0)
            res += solve(s, idx + 1, tight && (dig== ub), 1, cnt);
        else
            res += solve(s, idx + 1, tight && (dig==ub), 0, cnt + (dig != 0));
    }

    return dp[idx][tight][lz][cnt] = res;
}
long long func(long long x) {
    if (x <= 0)
        return 0;

    string s = to_string(x);
    memset(dp, -1, sizeof(dp));

    return solve(s, 0, 1, 1, 0) - 1;  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        long long l, r;
        cin >> l >> r;
        cout << func(r) - func(l - 1) << "\n";
    }

    return 0;
}
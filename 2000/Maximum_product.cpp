
#include <bits/stdc++.h>
using namespace std;

long long best = -1;
string ans;

long long solve(string &s, int idx, bool tight, bool lz,
                long long prod, string num) {
    if (idx == s.size()) {
        if (prod > best) {
            best = prod;
            ans = num;
        }
        return prod;
    }

    int lb = 0;
    int ub = tight ? s[idx] - '0' : 9;

    for (int dig = lb; dig <= ub; dig++) {
        if (dig == 0 && lz) {
            solve(s, idx + 1, tight && dig == ub, 1,
                  prod, num + char('0' + dig));
        } else {
            solve(s, idx + 1, tight && dig == ub, 0,
                  prod * dig, num + char('0' + dig));
        }
    }

    return best;
}

int main() {
    long long a, b;
    cin >> a >> b;

    string s = to_string(b);
    solve(s, 0, true, true, 1, "");

    long long x = stoll(ans);

    if (x >= a) {
        cout << x << '\n';
    } else {
        string t = to_string(a);
        best = -1;
        ans = "";
        solve(t, 0, true, true, 1, "");
        cout << ans << '\n';
    }
}

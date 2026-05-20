#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s;
    cin >> s;

    long long res = 0;

    for (int init = 0; ; init++) {   // infinite loop (break when ok)
        int cur = init;
        bool ok = true;

        for (int i = 0; i < (int)s.size(); i++) {
            res++;

            if (s[i] == '+') cur++;
            else cur--;

            if (cur < 0) {
                ok = false;
                break;
            }
        }

        if (ok) break;
    }

    cout << res << "\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
}
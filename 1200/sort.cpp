#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    string a(n), b(n);
    cin >> a >> b;

    vector<vector<int>> prefa(n + 1, vector<int>(26, 0));
    vector<vector<int>> prefb(n + 1, vector<int>(26, 0));

    for (int i = 0; i < n; i++) {
        prefa[i + 1] = prefa[i];
        prefb[i + 1] = prefb[i];

        prefa[i + 1][a[i] - 'a']++;
        prefb[i + 1][b[i] - 'a']++;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        int ans = 0;

        for (int c = 0; c < 26; c++) {
            int cnta = prefa[r][c] - prefa[l - 1][c];
            int cntb = prefb[r][c] - prefb[l - 1][c];

            if (cnta > cntb) {
                ans += cnta - cntb;
            }
        }

        cout << ans << '\n';
    }
}

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
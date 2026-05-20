#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    vector<vector<int>> prefix(n + 1, vector<int>(n + 1, 0));

    // Build prefix sum
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int val = (grid[i - 1][j - 1] == '*') ? 1 : 0;

            prefix[i][j] = val
                         + prefix[i - 1][j]
                         + prefix[i][j - 1]
                         - prefix[i - 1][j - 1];
        }
    }

    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int ans = prefix[x2][y2]
                - prefix[x1 - 1][y2]
                - prefix[x2][y1 - 1]
                + prefix[x1 - 1][y1 - 1];

        cout << ans << '\n';
    }

    return 0;
}
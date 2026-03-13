#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> freq;
        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int odd_cnt = 0;   // elements with odd frequency
        int even_cnt = 0;  // elements with even frequency

        for (auto& p : freq) {
            int cnt = p.second;
            if (cnt % 2 == 1) {
                odd_cnt++;
            } else {
                even_cnt++;
            }
        }

        int ans;
        if (odd_cnt > 0) {
            // Odd-count elements contribute 1 each (forced)
            // Even-count elements can all contribute 2
            ans = odd_cnt + 2 * even_cnt;
        } else {
            // All elements have even count
            // We need sum of x_i = n with same parity constraint
            if (n % 2 == 0) {
                // Can make all x_i odd -> all contribute 2
                ans = 2 * even_cnt;
            } else {
                // n is odd, need odd number of odd x_i's
                // If only 1 distinct element, we must give n to each side
                // n odd means one side has odd count -> contributes 2
                if (even_cnt == 1) {
                    ans = 2;  // Single element split n and n, n is odd
                } else {
                    // Multiple elements, can satisfy constraint
                    // Lose 2 from one element to fix parity
                    ans = 2 * even_cnt - 2;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
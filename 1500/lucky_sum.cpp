#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> lucky;
vector<int> pref;

void generate(int x) {
    if (x > 1e10) return;

    if (x)
        lucky.push_back(x);

    generate(x * 10 + 4);
    generate(x * 10 + 7);
}

signed main() {

    int l, r;
    cin >> l >> r;

    generate(0);

    sort(lucky.begin(), lucky.end());

    // prefix contribution
    pref.resize(lucky.size());

    int prev = 1;

    for (int i = 0; i < lucky.size(); i++) {

        int cnt = lucky[i] - prev + 1;

        pref[i] = cnt * lucky[i];

        if (i)
            pref[i] += pref[i - 1];

        prev = lucky[i] + 1;
    }

    auto solve = [&](int x) {

        if (x <= 0) return 0LL;

        int ans = 0;
        int prev = 1;

        for (int i = 0; i < lucky.size(); i++) {

            if (x <= lucky[i]) {

                ans += (x - prev + 1) * lucky[i];

                break;
            }

            ans += (lucky[i] - prev + 1) * lucky[i];

            prev = lucky[i] + 1;
        }

        return ans;
    };

    cout << solve(r) - solve(l - 1);
}
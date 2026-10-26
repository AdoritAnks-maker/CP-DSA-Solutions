#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int MAXN = 200000;
int phi[MAXN + 1];
void computePhi() {
    for (int i = 0; i <= MAXN; i++)
        phi[i] = i;

    for (int i = 2; i <= MAXN; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= MAXN; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    computePhi();
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int64 ans = 0;
        for (int g = 1; g <= n; g++) {
            int m = n / g;
            ans += 1LL * phi[m] * m;
        }
        cout << ans << '\n';
    }
    return 0;
}
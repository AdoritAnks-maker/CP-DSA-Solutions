#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long cT, cH, cU;
        cin >> cT >> cH >> cU;

        long long total = cT + cH + cU;

        long long by_area = (4 * total + 2) / 3; // ceil
        long long by_H = 2 * cH;

        cout << max(by_area, by_H) << '\n';
    }
}
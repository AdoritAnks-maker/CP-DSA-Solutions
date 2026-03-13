#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        long long n, g, b;
        cin >> n >> g >> b;

        long long need = (n + 1) / 2;

        long long cycles = need / g;
        long long rem = need % g;

        long long days = cycles * (g + b);

        if (rem)
            days += rem;
        else
            days -= b;

        cout << max(days, n) << "\n";
    }
}
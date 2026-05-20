#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = 0;

    for (int i = 0; i + 1 < n; i++) {
        if (a[i] > a[i+1]) {
            l = i;
            break;
        }
    }

    // find right boundary
    for (int i = n - 1; i - 1 >= 0; i--) {
        if (a[i-1] > a[i]) {
            r = i;
            break;
        }
    }

    // reverse the segment
    reverse(a.begin() + l, a.begin() + r + 1);

    // check if sorted
    for (int i = 0; i + 1 < n; i++) {
        if (a[i] > a[i+1]) {
            cout << "no\n";
            return 0;
        }
    }

    cout << "yes\n";
    cout << l + 1 << " " << r + 1 << "\n";
    return 0;
}

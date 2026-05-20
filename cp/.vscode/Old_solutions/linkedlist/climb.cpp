#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int answer = INT_MAX;

    for (int remove = 1; remove <= n - 2; remove++) {

        int maxDiff = 0;

        for (int i = 0; i < n - 1; i++) {
            if (i == remove - 1) {
                maxDiff = max(maxDiff, abs(a[i + 2] - a[i]));
                i++;
            } else {
                maxDiff = max(maxDiff, abs(a[i + 1] - a[i]));
            }
        }

        answer = min(answer, maxDiff);
    }

    cout << answer << endl;
}

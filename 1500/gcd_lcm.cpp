#include <bits/stdc++.h>
using namespace std;
const int MAXA = 200000;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> freq(MAXA + 1, 0);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    vector<int> cnt(MAXA + 1, 0);

    for(int i = 1; i <= MAXA; i++) {
        for(int j = i; j <= MAXA; j += i) {
            cnt[i] += freq[j];
        }
    }

    int ans = 1;
    // the largest number divisible by at least 2 elements
    for(int i = 1; i <= MAXA; i++) {
        if(cnt[i] >= 2) ans = i;
    }

    cout << ans << "\n";

    return 0;
}
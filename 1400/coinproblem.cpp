#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    vector<long long> coins = {15, 10, 6, 3, 1};
    
    while (tc--) {
        long long n;
        cin >> n;
        long long count = 0;
        for (long long coin : coins) {
            count += n / coin;  // Use original n each time
        }
        cout << count << '\n';
    }
    return 0;
}

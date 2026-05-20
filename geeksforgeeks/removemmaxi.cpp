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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int operations = 0;
        int right = n - 1;

        while (right >= 0) {
            
            int max_val = arr[0], idx = 0;
            for (int i = 0; i <= right; i++) {
                if (arr[i] >= max_val) {
                    max_val = arr[i];
                    idx = i;
                }
            }
            operations++;
            right = idx - 1; 
        }

        cout << operations << endl;
    }
    return 0;
}
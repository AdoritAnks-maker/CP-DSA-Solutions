#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int less = 0, greater = 0;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[i]) less++;
                if (arr[j] > arr[i]) greater++;
            }

            ans[i] = max(less, greater);
        }

        for (int x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
}
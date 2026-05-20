#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        set<long long> nums;
        for (int i = 0; i < n; i++) {
            nums.insert(arr[i]);
        }

        vector<long long> b(nums.begin(), nums.end());

        if (b.size() == 0) {
            cout << 0 << endl;
            continue;
        }

        long long mxlentt = 1;
        long long currlen = 1;

        for (int i = 1; i < b.size(); i++) {
            if (b[i] == b[i - 1] + 1) {
                currlen++;
            } else {
                currlen = 1;
            }
            mxlentt = max(mxlentt, currlen);
        }

        cout << mxlentt << endl;
    }
    return 0;
}

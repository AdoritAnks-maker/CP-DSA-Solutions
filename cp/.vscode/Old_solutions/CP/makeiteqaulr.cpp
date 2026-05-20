#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n), nums(n);
        unordered_map<int,int> freq_arr, freq_nums;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            freq_arr[arr[i]]++;
        }

        for(int i = 0; i < n; i++) {
            cin >> nums[i];
            freq_nums[nums[i]]++;
        }

        bool ok = true;
        for(auto &[x, count] : freq_arr) {
            // Check if either x+k or x-k has same frequency in nums
            if(freq_nums[x+k] != count && freq_nums[x-k] != count) {
                ok = false;
                break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

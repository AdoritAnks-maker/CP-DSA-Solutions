#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    unordered_map<long long , long long> freq;
    long long  left = 0;
    long long count = 0;

    for (long long right = 0; right < n; right++) {
        freq[arr[right]]++;  

        
        while (freq.size() > k) {
            freq[arr[left]]--;
            if (freq[arr[left]] == 0) freq.erase(arr[left]);
            left++;
        }


        count += right - left + 1;
    }

    cout << count << "\n";
}
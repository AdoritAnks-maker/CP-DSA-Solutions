#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> ans;
        int left = 1, right = n;

        while (left < right) {
            ans.push_back(right);
            ans.push_back(left);
            right--;
            left++;
        }

        if (left == right) {
            ans.push_back(left);
        }

        reverse(ans.begin(), ans.end());

        for (int x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

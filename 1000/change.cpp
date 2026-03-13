#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    
    while (tc--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<int> ones_pos, zeros_pos;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') ones_pos.push_back(i + 1);
            else zeros_pos.push_back(i + 1);
        }
        
        int ones_count = ones_pos.size();
        int zeros_count = zeros_pos.size();
        
        if (ones_count % 2 == 0) {
            cout << ones_count << endl ;
            for (int pos : ones_pos) cout << pos << " ";
            cout << endl ;
        }
        else if (zeros_count % 2 == 1) {
            cout << zeros_count << '\n';
            for (int pos : zeros_pos) cout << pos << " ";
            cout << endl ;
        }
        else {
            cout << -1 << endl ;
        }
    }
    return 0;
}
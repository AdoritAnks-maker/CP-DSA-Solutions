#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        
        vector<int> b(n + 1, 0); 
        
        for (int i = 1; i <= n; i++) {
            b[i] = i;
        }
        b[r] = l - 1;
        
        for (int i = 1; i <= n; i++) {
            cout << (b[i] ^ b[i-1]) << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt100 = 0, cnt200 = 0;
    for(int i = 0; i < n; i++) {
        int w;
        cin >> w;
        if(w == 100) cnt100++;
        else cnt200++;
    }
    if(cnt200 % 2 == 0) {
        if(cnt100 % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    } else {
        if(cnt100 < 2) cout << "NO" << endl;
        else {
            cnt100 -= 2;
            if(cnt100 % 2 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 1000000000000LL;
unordered_set<long long> cubes;

void precalc() {
    for(long long i = 1; i * i * i <= MAXN; i++) {
        cubes.insert(i * i * i);
    }
}

void solve() {
    long long x;
    cin >> x;
    
    bool found = false;
    for(long long i = 1; i * i * i <= x; i++) {  
        long long remain = x - i * i * i;
        if(cubes.count(remain)) {  
            found = true;
            break;
        }
    }
    
    if(found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    precalc();
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

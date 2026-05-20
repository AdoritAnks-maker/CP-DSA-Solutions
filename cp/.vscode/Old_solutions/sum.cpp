#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a, b, c;
    cin >> a >> b >> c;
    cout << ((a+b==c || c+a==b || b+c==a) ? "YES\n" : "NO\n");
}

int main(){
    long long t;
    cin >> t; // Initialize t by reading input
    while(t--){
        solve();
    }
    return 0;
}

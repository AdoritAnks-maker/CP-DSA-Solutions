#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a , long long b){
    if(b==0)return a;
    return gcd(b, a%b);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if(b%a==0){
            cout << b * (b/a);
        }
        else{
            cout << ((a/gcd(a,b))*b) << endl;
        }
        cout << endl;
    }
    return 0;
}

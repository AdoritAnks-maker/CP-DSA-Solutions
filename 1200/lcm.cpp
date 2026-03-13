#include <bits/stdc++.h>
using namespace std;

long long gcdnum(long long a, long long b) { 
    if (b == 0) return a;
    return gcdnum(b, a % b);
}

long long lcmnum(long long a, long long b) {
    return (a / gcdnum(a, b)) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--) {
        long long n; 
        cin >> n;
        if (n % 2 == 0) {
            cout << n / 2 << " " << n / 2 << "\n";
            continue;
        }
        
        long long smallest_div = n;
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                smallest_div = i;
                break;
            }
        }
        long long a, b;
        if (smallest_div == n) {  
            a = 1;
            b = n - 1;
        } else {
            a = n / smallest_div;  
            b = n - a;
        }
        cout << a << " " << b << "\n";
    }
    return 0;
}

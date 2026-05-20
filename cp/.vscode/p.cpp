#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x) {
    if (x < 2) return false;
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

bool almostPrime(long long n) {
    int cnt = 0;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            cnt++;
            while (n % i == 0)
                n /= i;
        }
    }

    if (n > 1)
        cnt++;

    return cnt == 2;
}

int main() {
    long long n;
    cin >> n;

    long long count = 0;
    for (long long i = 1; i <= n; i++) {
        if (almostPrime(i))
            count++;
    }

    cout << count << endl;
    return 0;
}

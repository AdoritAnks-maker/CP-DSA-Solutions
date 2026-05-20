#include <bits/stdc++.h>
using namespace std;

long long largestPrimeFactor(long long n) {
    long long maxPrime = -1;

    // Remove all factors of 2
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    // Remove odd factors
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }

    // If n is still greater than 2, it is prime
    if (n > 2) maxPrime = n;

    return maxPrime;
}

int main() {
    long long n;
    cin >> n;
    cout << largestPrimeFactor(n) << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 2; i < 2000000; i++) {
        bool prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) sum += i;
    }
    cout << sum;
    return 0;
}

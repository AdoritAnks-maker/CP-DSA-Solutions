#include <iostream>
using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count += (i * i == n) ? 1 : 2;
        }
    }
    return count;
}

int main() {
    int n = 1;
    while (true) {
        int triangle = n * (n + 1) / 2;
        if (countDivisors(triangle) > 500) {
            cout << triangle << endl;
            break;
        }
        n++;
    }
    return 0;
}

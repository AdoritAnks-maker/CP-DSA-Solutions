#include <iostream>
using namespace std;

int collatz_steps(long long n) {
    int steps = 1;
    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
        steps++;
    }
    return steps;
}

int main() {
    int max_steps = 0;
    int best = 1;
    
    for (int i = 1; i < 1000000; i++) {
        int steps = collatz_steps(i);
        if (steps > max_steps) {
            max_steps = steps;
            best = i;
        }
    }
    
    cout << best << endl;
    return 0;
}

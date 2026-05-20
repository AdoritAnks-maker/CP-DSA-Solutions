#include <bits/stdc++.h>
using namespace std;

int main() {
    long long sum = 0;

    for (int i = 10; i < 100; i++) {
        for (int j = 10; j < 100; j++) {

            long long num = i * 100 + j;  // concatenate

            if (num == (i + j) * (i + j)) {
                sum += num;
            }
        }
    }

    cout << sum << endl;
}

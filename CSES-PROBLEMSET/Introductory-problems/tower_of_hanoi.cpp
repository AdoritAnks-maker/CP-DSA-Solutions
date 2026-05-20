#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, int from, int to, int aux) {
    if (n == 0) return;
    towerOfHanoi(n - 1, from, aux, to);
    cout << from << " " << to << "\n";
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << (1LL << n) - 1 << "\n";
    towerOfHanoi(n, 1, 3, 2);
    return 0;
}
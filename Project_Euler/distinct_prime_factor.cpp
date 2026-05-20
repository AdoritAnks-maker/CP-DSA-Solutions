#include <bits/stdc++.h>
using namespace std;

int main() {
    int limit = 200000; 
    vector<int> distinctCount(limit+1, 0);

    
    for (int i = 2; i <= limit; i++) {
        if (distinctCount[i] == 0) {
            
            for (int j = i; j <= limit; j += i) {
                distinctCount[j]++;
            }
        }
    }

    
    for (int i = 2; i <= limit - 3; i++) {
        if (distinctCount[i] == 4 &&
            distinctCount[i+1] == 4 &&
            distinctCount[i+2] == 4 &&
            distinctCount[i+3] == 4) {
            cout << i << endl; 
            break;
        }
    }

    return 0;
}
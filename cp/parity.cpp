#include <bits/stdc++.h>
using namespace std;

bool isparity(long long a, long long b){
    if(abs(a - b) == 1) return true;   // differ by 1 → similar
    if(a % 2 == b % 2) return true;    // same parity → similar
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);

        int even = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 2 == 0) even++;
        }

        // Case 1: evens count is even → possible
        if(even % 2 == 0){
            cout << "YES\n";
            continue;
        }

        // Case 2: odd evens → need at least ONE similar odd-even pair
        bool found = false;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(isparity(a[i], a[j])){ 
                    found = true;
                    break;
                }
            }
            if(found) break;
        }

        cout << (found ? "YES\n" : "NO\n");
    }

    return 0;
}

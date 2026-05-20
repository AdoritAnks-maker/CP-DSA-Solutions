#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long a, b;
        cin >> a >> b;

        // edge cases
        if(a < b){
            cout << -1 << endl;
            continue;
        }
        if(b == 1){
            if(a == 1) cout << 2 << endl;
            else cout << 0 << endl;
            continue;
        }

        long long count = 0;
        while(a > b){
            if(a % b != 0){
                count = -1;
                break;
            }
            a /= b;
            count++;
        }

        if(a != b || count == -1){
            cout << 0 << endl;
        } else {
            cout << count + 2 << endl;
        }
    }
    return 0;
}

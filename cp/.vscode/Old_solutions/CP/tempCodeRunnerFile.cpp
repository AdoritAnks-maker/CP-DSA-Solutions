#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        vector<long long> a(n), b(n);
        for(long long i = 0; i < n; i++) cin >> a[i];
        for(long long i = 0; i <n; i++) cin >> b[i];

        long long score = 0;

        for(long long i = 0;  i < n; i++){
            score = max(score - a[i], b[i] - score);
        }

        cout << score << endl ;
    }
    return 0;
}

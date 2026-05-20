#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long stick , diamond ;
        cin >> stick >> diamond ;
        long long ans = min((stick+diamond)/3 , min(stick,diamond));
        cout << ans << endl;
    }
    return 0;
}
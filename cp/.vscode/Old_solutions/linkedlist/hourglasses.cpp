#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t ;
    while(t--){
        long long  s , k , m ;
        cin >> s >> k >> m;
        long long elapsed=m%k;
        long long ans  = s-elapsed;
        if(ans<0)ans=0;
        cout << ans << endl ;
    }
}
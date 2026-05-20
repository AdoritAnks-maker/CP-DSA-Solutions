#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mod 1000000007

void solve(){
    ll n , a , b ;
    cin >> n >> a >> b ;
    ll groups =  n / 3 ;
    ll rem  = n % 3 ;
    ll ans   =  groups*min(a*3 , b) ;
    if(rem == 1) ans += min(a , b) ;
    else if(rem == 2) ans += min(a*2 , b) ; 
    cout << ans << endl ;
}

int main(){
    fast;
    int t; cin >> t;
    while(t--) solve();
}
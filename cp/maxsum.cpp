#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long ans = 0;
        long long n , k ;
        cin >> n >> k ;
        if(n>=k){
            ans= 1;
        }
        else{
            ans=(k+n-1)/n;
       }
       cout << ans << endl ;
    }
    return 0; 
}
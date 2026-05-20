#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long t ;
    cin >>t ;
    while(t--){
        long long n;
        cin >> n ;
        long long max_i=2*n-1;
        long long max_j = 2*n+1;
        long long moves=0;
        for(long long i =1 ;i<=n ;i++){
            moves+=abs(max_i-1);
        }
        for(long long j =1 ;j<=n ;j++){
            moves+=abs(max_j-1);
        }
        cout << moves/2 << endl ;
    }
    return 0;
}
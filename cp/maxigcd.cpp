#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a , long long b){
    if(a==0)return b;
    return gcd(b%a ,a);
}

int main(){
    int t;
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        cout << n/2 << endl ;
    }
    return 0;
}
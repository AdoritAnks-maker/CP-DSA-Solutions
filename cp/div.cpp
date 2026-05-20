#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t ;
    while(t--){
        long long n , k ; 
        cin >> n >> k ;
        long long ans = 0;
        if(n%k==0){
            ans =  1;
        }
        else {
            long long rem = n%k;
            if(rem<=n){
                ans=(k/n);
            }else{
                ans=(k/n)+1;
            }
        }

    }
    return 0;
}
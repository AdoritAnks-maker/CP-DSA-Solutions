#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    if(n<1)return false;
    for(long long i=2 ;i*i<=n ;i++){
        if(n%i==0){
            return false;
        }
    }
    return true ;
}

int main(){
    long long k ;
    cin >> k;

    long long count = 0;
    long long num =2;

    while(true){
        if(isPrime(num)){
            count++;
        }
        if(count==k){
            cout << num ;
            break;
        }
        num++;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    if(n<1)return false;
    for(long long i = 2 ;i*i<=n ;i++){
        if(n%i==0){
            return false;
        }
    }
    return true ;
}

long long sum =0;

int main(){
    long long n ;
    cin >> n;
    long long sum = 0;
    for(long long i =2 ;i<=n;i++){
        if(isPrime(i))sum+=i;
    }
    cout << sum << endl; 
}
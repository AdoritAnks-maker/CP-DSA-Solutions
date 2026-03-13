#include<bits/stdc++.h>
using namespace std;

bool isprime(long long x){
    if(x< 2)return false;
    for(long long i = 2;i*i<=x ;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc ;
    while(tc--){
        int d;
        cin >> d ;
        long long p = d+1;
        while(!isprime(p))p++;

        long long q = p+d;
        while(!isprime(q))q++;

        cout << p*q << endl;
    }
}
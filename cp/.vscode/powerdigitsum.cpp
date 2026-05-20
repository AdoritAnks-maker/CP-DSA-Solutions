#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n ;
    long long ans = pow(2,n);
    long long sum = 0;
    while(ans>0){
        sum+=ans%10;
        ans/=10;
    }
    cout << sum << endl;
}
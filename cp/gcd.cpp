#include<bits/stdc++.h>
using namespace std ;


long long gcd (long long a , long long b ){
    if(b==0){
    return a ;
}
else{
    return gcd(b , a % b );
}
}

int main(){
    long long num1 , num2;
    cin >> num1 >> num2 ;
    cout << gcd(num1,num2) << endl ;
}


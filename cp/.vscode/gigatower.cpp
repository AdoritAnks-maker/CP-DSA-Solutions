#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a ;
    cin >> a;
    
    if(a%10==8){
        cout << 10 << endl ;
    }else{
        cout << abs(8-(a%10)+10)%10 << endl ;
    }
    return 0;
}
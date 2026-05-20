#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t ;
    while(t--){
        long long a ,b , c ;
        cin >> a >> b >> c;
        long long z = min(a,min(b,c));
        if(a==b && b==c){
            cout << "YES" << endl;
        }
        if(a+b+c==3*z){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
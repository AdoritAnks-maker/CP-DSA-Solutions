#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t ;
    while(t--){
        long long a ,b , c ;
        cin >> a >> b >> c ;
        if(a+b==c){
            cout << "+" << endl ;
        }
        else{
            cout << "-" << endl;
        }
    }
    return 0;
}
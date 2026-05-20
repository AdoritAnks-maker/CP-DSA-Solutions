#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long x , y , k ;
        cin >> x >> y >> k ;
        long long y_jumps=(y+k-1)/k;
        long long x_jumps=(x+k-1)/k;
        if(y_jumps>=x_jumps){
            cout << 2*y_jumps << endl;
        }
        else{
            cout << 2*x_jumps-1 << endl;
        }
    }
    return 0;
}
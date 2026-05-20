#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long a , b ;
        cin >> a >> b ;
        long long moves=0;
        long long diff=abs(a-b);
        if(diff%10>0){
            moves = (diff/10)+1;
        }
        if(diff%10==0){
            moves=(diff/10);
        }
        cout << moves << endl;
    }
    return 0;
}
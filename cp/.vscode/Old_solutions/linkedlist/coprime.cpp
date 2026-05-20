#include<bits/stdc++.h>
using namespace std;

int main(){
    long long l , r ;
    cin >> l >> r ;
    if(r-l+1<3){
        cout << -1 << endl ;
        return 0;
    }
    if(l%2!=0){
        l++;
    }
    if(l+2>r){
        cout << -1 << endl;
        return 0;
    }else{
         cout << l << " " << l+1 << " " << l+2 ;
    }
   
}
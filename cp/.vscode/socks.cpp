#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a , b ;
    cin >> a >> b ;
    long long fashion = min(a,b);
    long long same = (max(a,b)-min(a,b))/2;
    if(same < 0){
        same = 0;
    }
    cout  << fashion << " " << same ;
    return 0 ;
}
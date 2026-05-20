#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long sum1=0;
    long long sum2=0;
    long long sum3=0;
    long long t ;
    cin >> t ;
    long long x, y,  z ;
    while(t--){
        cin >> x >> y >> z ;
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
    if(sum1==0 && sum2==0 && sum3==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
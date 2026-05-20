#include<bits/stdc++.h>
using namespace std;

long long solvefunc(long long num){
    for(int i =3 ;i*i<=num ;i+=2){
        if(num%i==0)return i;
    }
    return num;
}


int main(){
    long long t ;
    cin >> t ;
    while(t--){
        long long num , k ;
        cin >> num >> k;
        long long smallest_factor=0;
        if(num%2==0){
            smallest_factor=2;
            num+=(2*k);
        }else{
            num+=solvefunc(num);
            num+=2*(k-1);
        }
        
        cout << num << endl;
    }
    return 0;

}
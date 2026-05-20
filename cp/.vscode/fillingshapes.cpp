#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ;
    cin >> n;
    if(n%2==0){
        cout << pow(2,n/2);
    }else{
        cout << 0 << endl;
    }
    return 0;
}
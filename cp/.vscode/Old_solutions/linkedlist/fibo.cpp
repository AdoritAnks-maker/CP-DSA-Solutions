#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    int a = 0; 
    int b = 1 ;
    for(int i = 0 ;i<n ;i++){
        int temp = a+b ;
        a=b ;
        b=temp ;
    }
    return a ;
}

int main(){
    int t ;
    cin >> t ;
    cout  << fib(t) << endl;
}
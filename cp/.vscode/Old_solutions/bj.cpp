#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ;
    cin >> n ;
    long long sum =10;
    long long required=n-sum;
    long long ways=0;
    
    if(required>=1 && required<10){
        ways=4;
    }
    if(required==10){
        ways = 15;
    }
    if(required>11){
        ways=0;
    }
    if(required==11){
        ways=4;
    }
    cout << ways << endl;
    return 0;
}
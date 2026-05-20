#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ;
    cin >> n;
    for(long long i =0;i<2*n+1 ;i++){
        for(long long j =i ;j<2*n+1;j++){
            cout << j << " ";
        }
        cout << endl ;
    }
}
#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long t ;
    cin >> t;
    while(t--){
    long long n ;   cin >> n;
    long long sum=0;
    vector<long long>arr(n-1);
    for(long long i = 0; i<n-1 ;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    cout << 0-sum << endl ;
    }
}
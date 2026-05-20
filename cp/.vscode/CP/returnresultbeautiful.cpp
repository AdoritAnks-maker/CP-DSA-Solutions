#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a , long long b){
    if(b==0)return a ;
    return gcd(b&a , b);
}

long long gcdresult(vector<int>arr , long long b){
    if(b<1)return 0;
    long long n = arr.size();
    long long result = arr[0];
    long long result1=arr[1];
    for(long long i = 3 ;i<n;i+=2){
        result1=gcd(result1 , arr[i]);
    }
    for(long long i = 0 ;i<n;i+=2){
        result=gcd(result , arr[i]);
    }
    return result ;
}

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n; 
        vector<long long>arr(n);
        for(long long i = 0; i<n ;i++){
            cin >> arr[i];
        }

    }
}
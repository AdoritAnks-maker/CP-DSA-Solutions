#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long n , k ;
    cin >> n >> k;
    bool ok = true ;
    vector<long long>arr(n);
    for(long long i = 0;i<n;i++)cin >> arr[i];
    for(long long i =k;i<n;i++){
        for(long long j = i+1 ; j<n-1 ;j++){
            if(arr[i]!=arr[j])ok=false ;

        }
    }for(long long i = 0;i <n ;i++){
        long long kth = arr[k+1];
        arr.push_back(kth);
        arr.popg(arr[0]);
    }
}
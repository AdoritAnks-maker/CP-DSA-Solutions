#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long n ;
    cin >> n ;
    vector<long long>arr(n);
    for(long long i = 0;i< n;i++){
        cin >> arr[i];
    }
   for(long long i =0 ;i < n;i++){
    if(arr[i]<0){
        arr[i]=2;
    }
    if(arr[i]>0){
        arr[i]=1;
    }
   }

   for(long long  i = 0; i< n ;i++){
    cout << arr[i] << " ";
   }
    }
}
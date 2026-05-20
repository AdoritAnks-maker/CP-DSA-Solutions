#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n ;
        vector<long long>arr(n);
        for(long long i = 0 ;i< n;i++){
            cin >> arr[i];
        }
        bool ok = true ;
        for(long long i = 1 ;i < n ; i++){
            ok&=(arr[i]-arr[i-1]<=1);

        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl ;
        }
    }
    return 0;
}
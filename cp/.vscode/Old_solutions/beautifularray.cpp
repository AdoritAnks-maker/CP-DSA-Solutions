#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t ;
    while(t--){
        long long  n , k ;
        cin >> n >> k ;
        long long sum =0 ;
        vector<long long>arr(n*k);
        for(long long i = 0 ;i<n*k ;i++){
            cin >> arr[i];
        }
        for(long long i = n/2 ;i<=n*k;i+=n){
            sum+=arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}
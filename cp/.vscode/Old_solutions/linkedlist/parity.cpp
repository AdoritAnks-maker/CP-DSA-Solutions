#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n ;
        long long sum =0;
        vector<long long>arr(n);
        for(long long i = 0;i<n ;i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        bool ok = false;
        long long req_sum=0;
        for(long long i  =0 ;i<n ;i++){
            long long rem_sum=sum-arr[i];
            req_sum+=arr[i];
            if(rem_sum%2==req_sum%2){
                ok=true;
                break;
            }
        }
        if(ok){
            cout << "YES"  << endl ;
        }else{
            cout << "NO" << endl ;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t ;
    vector<long long>a,b ;
    while(t--){
        long long n , m , k;
        cin >> n >> m >> k ;
        set<long long>arr;
        for(long long i =0;i<n;i++)cin >> a[i];
        for(long long i = 0 ;i<m;i++)cin >> b[i];
        for(long long i = 0 ; i< n ;i++){
            if(a[i]<=k){
                arr.insert(a[i]);
            }
            if(b[i]<=k){
                arr.insert(b[i]);
            }
        }
        if(arr.size()==k){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
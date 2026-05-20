#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n , k ;
    cin >> n >> k;
    vector<long long>a(n),b(n);
    for(long long i =0 ;i<n ;i++)cin >> a[i];
    for(long long i =0 ;i<n;i++)cin >> b[i];
    long long sum=-1;
    for(long long i =0 ;i<n ;i++){
        if(b[i]!=-1){
            if(sum==-1)sum=a[i]+b[i];
        }
        else{
            if(sum!=a[i]+b[i]){
                cout << 0 << endl;
                return;
            }
        }
    }
    if(sum==-1){
       sort(a.begin(),a.end());
       long long mx=a[n-1]-a[0];
       cout << k-mx+1 << endl;
       return;
    }
    cout << 1 << endl;
}

int main(){
    long long t ;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
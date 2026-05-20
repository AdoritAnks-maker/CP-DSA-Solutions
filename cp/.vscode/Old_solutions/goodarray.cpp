#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long  n ;
    cin >> n;
    long long sum = 0;
    long long count_1=0;

    vector<long long>a(n);
    for(long long i = 0; i< n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    for(int x:a){
        if(x==1)count_1++;
    }
    if(sum>=count_1+n && n>1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    long long t ;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
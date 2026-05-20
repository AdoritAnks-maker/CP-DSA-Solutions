#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long n , k ;
        cin >> n >> k;
        vector<long long>arr(n);
        for(auto &x : arr){
            cin >> x ;
            x%=k;
            if(!x)x=0;
        }
        vector<long long >order;
        iota(order.begin(),order.end(),0);
        stable_sort(order.begin(),order.end() ,[&](long long i , long long j){
            return arr[i]>arr[j];
        });
        for(auto &x : order){
            cout << x+1 << " ";
        }
        cout << endl;
    }
    return 0;

}
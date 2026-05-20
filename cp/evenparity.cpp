#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t ;
    while(t--){
        long long  n  ;
        cin >> n ;
        long long count = 0 ;
        vector<long long >arr(n);
        for(long long i  = 0; i<n  ;i++){
            cin >> arr[i];
        }
        for(long long i  = 0;i <n ;i++){
            if(i%2!=arr[i]%2){
                count++;
            }
        }
        cout << count/2  << endl ;
    }
    return 0;
}
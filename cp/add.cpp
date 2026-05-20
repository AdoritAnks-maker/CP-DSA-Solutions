#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n;
        vector<long long>arr(n);
        long long oddcount=0;
        for(long long i = 0; i< n;i++)cin >> arr[i];
        for(long long i = 0;i<n ;i++){
            if(arr[i]%2==1)oddcount++;
        }
        if(oddcount%2==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
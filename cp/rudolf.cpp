#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n;
        bool ok = true ;
        vector<long long>arr(n);
        for(long long i =0 ;i<n ;i++)cin >> arr[i];
        for(long long i =2 ;i<n-1;i++){
            if(arr[i]>=2){
                while(arr[i]>=0 && arr[i-1]>=0 && arr[i+1]>=0){
                    arr[i-1]-=1;
                    arr[i]-=2;
                    arr[i+1]-=1;
                }
            }
        }
        for(int x : arr){
            if(x>0) ok = false;
            else  ok = true ;
        }
        if(ok){
            cout << "YEs"<< endl ;
        }else{
            cout << "No" << endl ;
        }

        
    }
    return 0;
}
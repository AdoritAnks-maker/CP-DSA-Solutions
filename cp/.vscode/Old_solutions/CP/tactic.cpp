#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >>t ;
    while(t--){
        long long n ;
        cin >> n;
        vector<long long>arr(n) , nums(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
         for(int i = 0;i<n;i++){
            cin >> nums[i];
        }
        long long mx = 0 ;
        long long mn = 0;
        for(int i =0; i<n ;i++){
            mx=max(mx - arr[i] ,  nums[i]-mn);
            mn=min(mx-arr[i] , nums[i]-mn);
        }
        cout << mx << endl ;
    }
    return 0;
}
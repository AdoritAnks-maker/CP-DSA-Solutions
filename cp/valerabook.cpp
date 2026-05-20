#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long n , t ;
    cin >> n >> t;
    vector<long long>arr(n);
    long long ans = 0;
    long long sum = 0;
    long long l = arr[0];
    for(long long i= 0;i < n ;i++)cin >> arr[i];
    for(long long i = 0; i<n ;i++){
        sum+=arr[i];
        while(sum>t){
            sum-arr[l];
            l++;
        }
        ans=max(ans,i-l+1);
    }
    cout << ans << endl ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long n , m ;
    cin >> n >> m ;
    vector<int>arr(m);
    for(int i = 0;i< m ;i++){
        cin >>arr[i];
    }
    sort(arr.begin() , arr.end());
    int ans= INT_MAX;
    for(int i = 0;i+n-1 <m ;i++){
        int diff =  arr[i+n-1]-arr[i];
        ans=min(ans , diff);
    }
    cout << ans << endl ;
}
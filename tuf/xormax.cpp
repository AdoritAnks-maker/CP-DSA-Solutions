
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while(tc--){
        int n ;
        cin >> n ;
        vector<long long >arr(n);
        for(int i =0 ;i<n;i++){
            cin >> arr[i];
        }
        long long  ans =INT_MIN;
        for(int i = 0;i< n; i++){
            for(int j = i+1;j<n ;j++){
                ans= max(ans , arr[i]^arr[j]);
            }
        }
        cout << ans << endl ;
    }
}
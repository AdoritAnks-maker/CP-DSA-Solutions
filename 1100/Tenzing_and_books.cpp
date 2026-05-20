#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc ;
    cin >> tc ;
    while(tc--){
        long long n , x ;
        cin >> n >> x ;
        vector<vector<long long>>arr(3 , vector<long long>(n));
        for(int i = 0 ;i<3;i++){
            for(int j = 0 ;j < n ;j++){
                cin >> arr[i][j];
            }
        }
        
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long  n ;
        cin >> n ;
        int m = 2*n;
        
        vector<vector<int>>grid(n , vector<int>(n));
        for(int i = 0 ;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> grid[i][j];
            }
        }

    }
}
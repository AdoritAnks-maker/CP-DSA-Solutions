#include<bits/stdc++.h>
using namespace std;

int main(){
    long long tc;
    cin >> tc;
    while(tc--){
        long long n ;
        cin >> n ;
        vector<long long>arr(n);
        long long contrast =0;
        for(long long i =0 ;i<n ;i++){
            cin >> arr[i];
        }
        for(long long i  = 0 ;i < n-1 ;i++){
            contrast+=(abs(arr[i+1]- arr[i]));
        }
        
    }
}
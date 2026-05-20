#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t ;
    while(t--){
        long long n ; 
        cin >> n;
        vector<long long>arr(n);
        for(int i =0;i<n ;i++){
            cin >> arr[i];
        }
        long long max_elm=*max_element(arr.begin() ,arr.end());
        cout << max_elm * n << endl ;
    }
}
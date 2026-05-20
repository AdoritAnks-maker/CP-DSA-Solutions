#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >>t ;
    while(t--){
        long long n ;
        cin >> n;
        vector<int >arr(n);
        for(long long i= 0;i<n;i++){
            cin >> arr[i];
        }
        if(!is_sorted(arr.begin() ,arr.end())){
            cout << 0 << endl ;
            return 0;
        }
        long long mini_gap=INT_MAX;
        for(long long i =0 ;i<n-1 ;i++){
            long long diff = arr[i+1]-arr[i];
            mini_gap=min(diff , mini_gap);
        }
        long long operations = mini_gap/2 +1 ;
        cout << operations << endl;
    }
    return 0;
}
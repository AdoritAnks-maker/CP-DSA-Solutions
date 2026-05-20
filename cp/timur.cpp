#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long n , k ;
        cin >> n >> k ;
        vector<long long>arr(n);
        for(long long i = 0; i< n;i++)cin >> arr[i];
        sort(arr.begin(),arr.end(),greater<long long>());
        while(k--){
            long long q ;
            cin >> q ;
            long long l =0 ;
            long r =n-1;
            long long suml=0;
            if(suml<q){
                long long count = 0;
                suml+=arr[l];
                l++;
                count++;
            }if(suml>=q){
                break;
            }
            cout << count << endl ;
        }
    }
}
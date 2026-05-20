#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long t ;
    cin >> t ;
    while(t--){
        long long n , x ;
        cin >> n >> x ;
        vector<long long >arr(n);
        long long sum =0;
        long long max_sum = 0;
        for(long long i =0 ;i< n;i++){
            cin >> arr[i];
            sum+=arr[i];
            max_sum+=((arr[i]-1+x)/x);
        }
        long long min_sum=(sum-1+x)/x;
        cout << min_sum << " " << max_sum;
        cout << endl;
    }

    return 0;
}
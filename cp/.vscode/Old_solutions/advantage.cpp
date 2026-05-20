#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t ;
    while(t--){
        long long n  ;
         cin >> n ;
         vector<long long>arr(n);
         for(long long i =0 ;i <n ; i++)cin >> arr[i];
         long long maximum=*max_element(arr.begin(),arr.end());
         long long second_max=LLONG_MIN;
         for(auto x:arr){
            if(x!=maximum){
                second_max=max(second_max,x);
            }
         }
         vector<long long>idx;
        for(long long i = 0 ; i< n ;i++){
            idx.push_back(arr[i]-maximum);
        }
        for(auto x : idx){
            if(x==0){
                x=second_max;
            }
        }

        for(long long i = 0; i< n ; i++){
            cout << idx[i] << " ";
        }
        cout  << endl ;
    

    
    }
    return 0;
}
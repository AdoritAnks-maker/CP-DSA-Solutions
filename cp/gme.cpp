#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n ;
        vector<long long>arr(n);
        for(long long i = 0; i< n ;i++)cin >> arr[i];
        vector<long long>a;
        long long count=0;
        a.push_back(arr[0]);
        for(long long i = 1; i< n ;i++){
            if(arr[i-1]<=arr[i]){
                a.push_back(arr[i]);
            }else{
                a.push_back(arr[i]);
                a.push_back(arr[i]);
            }
        }
        cout << a.size() << endl ;
        for(auto it : a){
            cout  << it << " ";
        }
        cout << endl;
    }
    return 0;
}
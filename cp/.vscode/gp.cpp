#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n ;
        map<long long , long long>freq;
        vector<long long >arr(n);
        for(long long i = 0 ;i <n ;i++){
            cin >> arr[i];
            freq[arr[i]]++;
        }
        long long idx = 0;
        for(long long i = 0;i<n ;i++){
            if(freq[arr[i]]==1){
                idx=i+1;
            }
        }
        cout << idx << endl ;
    }
    return 0;
}
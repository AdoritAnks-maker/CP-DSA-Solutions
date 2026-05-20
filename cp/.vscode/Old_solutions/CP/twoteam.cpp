#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n;
        vector<long long>arr(n);
        map<long long , long long>freq;
        for(long long i = 0;i<n;i++){
            cin >> arr[i];
            freq[arr[i]]++;
        }
        long long distinctelement=freq.size();
        long long maxfreq=0;
        for(auto x : freq){
            maxfreq=max(maxfreq ,x.second);
        }
        long long base =min(maxfreq , distinctelement-1);
        long long ans=base;
        if(maxfreq >= freq.size()+1){
            ans = freq.size();
        }
        cout << ans << endl;
    }
    return 0;
}
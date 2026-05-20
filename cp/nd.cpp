#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    vector<int>arr;
    while(t--){
        long long n , k ;
        cin >> n >> k;
        long long ans = (k-1)/(n-1);
        long long fin_ans=k+ans;
        cout << fin_ans << endl ;
    }
    return 0;

}
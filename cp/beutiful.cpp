#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n ;
        string s(n,' ');
        cin >> s ;
        string sub1= "pie";
        string sub2="map";
        long long count= 0;
        for(int i = 0;i<n-2;i++){
            if(s.substr(i,3)=="pie")count++;
            if(s.substr(i,3)=="map")count++;
        }
        cout  << count << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        char r;
        cin >> r;
        bool ok = false;
        string s = "codeforces";
        for(long long i = 0 ;i<s.size() ;i++){
            if(s[i]==r){
                ok=true;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
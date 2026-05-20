#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    cin >> s;
    int n=s.size();
    vector<int>pref(n, 0);
    for(int i = 0;i< n ;i++){
        pref[i]=pref[i-1]+(s[i]==s[i-1]);
    }
    int m ;
    cin >> m;
    while(m--){
        int l ,r ;
        cin >> l >> r; 
        cout << pref[r-1]-pref[l-1] << endl ;
    }
    return 0;
}
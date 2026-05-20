#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin >> s ;
    int q ;
    cin >>q  ;
    int hash[256]= {0};
    for(int i= 0;i<s.size(); i++){
        hash[s[i]]++;
    }
    while(q--){
        char ch  ;
        cin >> ch ;
        cout << hash[ch] << endl ;
    }
    return 0 ;
}
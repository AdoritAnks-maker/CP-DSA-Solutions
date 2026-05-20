#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        string s ;
    cin >> s ;
    int n = s.size();
    int open1=0,open2=0,moves=0;
    for(int i =0;i<n;i++){
        if(s[i]=='(')open1++;
        else if(s[i]=='[')open2++;
        else if(s[i]==')'){
            if(open1>=1){
                moves++;
                open1--;
            }
        }
        else if(s[i]==']'){
            if(open2>=1){
                moves++;
                open2--;
            }
        }
    }
    cout << moves << endl ;
    }
    return 0;
    
}
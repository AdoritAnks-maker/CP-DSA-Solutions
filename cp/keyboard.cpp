#include<bits/stdc++.h>
using namespace std;

int main(){
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
   
    char ch ;
    cin >> ch ;
    string s ;
    cin >> s ;
    string result="";
    for(char c : s ){
        long long pos =  keyboard.find(c);

        if(ch=='R'){
            result+=keyboard[pos-1];
        }if(ch=='L'){
            result+=keyboard[pos+1];
        }
    }
    cout << result << endl;
    return 0;
}
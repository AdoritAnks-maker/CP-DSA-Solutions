#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    cin >> s ;
    vector<char>result;
    for(auto ch:s){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u' || ch=='y'){
            continue;
        }
        result.push_back('.');
        result.push_back(ch);
    }
    for(auto x : result){
        cout << x ;
    }
    cout << endl ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    string s ;
    cin >> s ;
    int  k=0;
    vector<char>idx;
    for(int i = 0;i<n ;i+=k){
        idx.push_back(s[i]);
        k++;
    }
    for(auto it : idx){
        cout << it ;
    }
    cout << endl;
    return 0;
}
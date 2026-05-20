#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    getline(cin , s1);
    
    map<char , int>freq;
    string s2 ;
    getline(cin,s2);
    map<char, int>freq2;
    for(char c: s1){
        if(c== ' ')continue;
        freq[c]++;
    }
    for(char x : s2){
        if(x== ' ')continue;
        freq2[x]++;
    }
    for(auto &it : freq2){
        char ch = it.first;
        if(freq[ch]<it.second){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
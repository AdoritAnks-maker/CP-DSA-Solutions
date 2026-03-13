#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long tc;
    cin >> tc;
    while(tc--){
        string s  , t;
        cin>> s; 
        cin >> t;
        string res="";
        map<char, int>mpp;
        map<char , int>freq;
        for(auto x : s){
            freq[x]++;
        }
        for(auto x : t){
            mpp[x]++;
        }
        

    }
}
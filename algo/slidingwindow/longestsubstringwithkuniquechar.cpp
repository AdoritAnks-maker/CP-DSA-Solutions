#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s ;
    cin >> s ;
    long long k ;
    cin >> k ;
    long long i =0 ;
    long long j  =0 ;
    map<char , int>mp;
    long long max_lentt= INT_MIN;
    while(j < s.size()){
        mp[s[j]]++;

        if(mp.size()< k){
            j++;
        }
        else if(mp.size()== k){
            max_lentt= max(max_lentt , j-i+1);
            j++;
        }
        else if(mp.size() > k){
            while(mp.size() > k ){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    cout << max_lentt << endl;
    return  0;
}
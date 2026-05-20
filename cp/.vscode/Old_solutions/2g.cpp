#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ;
    cin >> n ;
    string s ;
    cin >> s;
    string max_sub="";
    map<string,int>freq;
    long long max_freq= INT_MIN;
    for(long long i = 0 ; i< n-1 ;i++){
        string sub = s.substr(i,2);
        freq[sub]++;
        if(freq[sub]>max_freq){
            max_freq=freq[sub];
            max_sub=sub;
        }
    }

    cout << max_sub << endl;

}